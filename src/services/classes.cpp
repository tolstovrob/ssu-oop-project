#pragma once
#ifndef CLASSES_CPP
#define CLASSES_CPP

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <limits>
#include <algorithm>
#include <iomanip>

#include "entity/EnrollRequest.cpp"
#include "entity/IndividualClass.cpp"
#include "entity/GroupClass.cpp"
#include "entity/Course.cpp"

#include "utils/utils.cpp"

void printResults(const std::vector<IndividualClass>& individualClasses,
                  const std::vector<GroupClass>& groupClasses,
                  const std::vector<EnrollRequest>& remainingRequests) {

   std::cout << "\nИндивидуальные занятия:\n";
   std::cout << std::setw(10) << "ID" 
             << std::setw(15) << "Курс ID" 
             << std::setw(20) << "Студент ID" << "\n";

   for (const auto& individual : individualClasses) {
       std::cout << std::setw(10) << individual.getId()
                 << std::setw(15) << individual.getCourseId()
                 << std::setw(20) << individual.getStudentId() << "\n";
   }

   std::cout << "\nГрупповые занятия:\n";
   std::cout << std::setw(10) << "ID" 
             << std::setw(15) << "Курс ID" 
             << std::setw(25) << "Студенты IDs" << "\n";

   for (const auto& group : groupClasses) {
       std::cout << std::setw(10) << group.getId()
                 << std::setw(15) << group.getCourseId()
                 << std::setw(25);

       for (const auto& studentID : group.getStudentIds()) {
           std::cout << studentID << " ";
       }

       std::cout << "\n";
   }

   if (!remainingRequests.empty()) {
       std::cout << "\nОставшиеся заявки на зачисление:\n";
       std::cout << std::setw(10) << "ID" 
                 << std::setw(15) << "Имя" 
                 << std::setw(15) << "Фамилия" 
                 << std::setw(10) << "ID курса" 
                 << "\n";

       for (const auto& request : remainingRequests) {
           std::cout << std::setw(10) << request.getId()
                     << std::setw(15) << request.getFirstName()
                     << std::setw(15) << request.getLastName()
                     << std::setw(10) << request.getCourseId()
                     << "\n";
       }
   }
}

void processEnrollRequests(std::vector<EnrollRequest>& enrollRequests,
                           std::vector<IndividualClass>& individualClasses,
                           std::vector<GroupClass>& groupClasses,
                           std::vector<Student>& students,
                           std::vector<Course>& courses) {
  clearConsole();
  
  if (enrollRequests.empty()) {
    return;
  }

  std::vector<unsigned long long> individualIds, groupIds, studentIds, courseIds;
  
  std::transform(individualClasses.begin(), individualClasses.end(), std::back_inserter(individualIds),
                 [](const IndividualClass& individualClass) { return individualClass.getId(); });

  std::transform(groupClasses.begin(), groupClasses.end(), std::back_inserter(groupIds),
                 [](const GroupClass& groupClass) { return groupClass.getId(); });

  std::transform(students.begin(), students.end(), std::back_inserter(studentIds),
                 [](const Student& student ) { return student.getId(); });

  std::transform(courses.begin(), courses.end(), std::back_inserter(courseIds),
                 [](const Course& course ) { return course.getId(); });           

  std::vector<EnrollRequest> approvedRequests;
  std::map<unsigned long long, std::vector<EnrollRequest>> groupBuffer, approvedRequestsBuffer;

  for (EnrollRequest& request : enrollRequests) {
    if (request.getIsIndividual()) {
      unsigned long long newId = getFreeId(individualIds);
      individualClasses.emplace_back(newId, request.getCourseId(), request.getId());
      approvedRequests.push_back(request);

      if (std::find(studentIds.begin(), studentIds.end(), request.getId()) != studentIds.end()) {
        students.emplace_back(request.getId(), request.getFirstName(), request.getLastName());
        studentIds.push_back(request.getId());
      }
    } else {
      groupBuffer[request.getCourseId()].push_back(request);
      approvedRequestsBuffer[request.getCourseId()].push_back(request);

      if (groupBuffer[request.getCourseId()].size() == 7) {
        unsigned long long newId = getFreeId(groupIds);
        std::map<unsigned long long, std::vector<unsigned long long>> groupMembersIds;

        for (auto &student : groupBuffer[request.getCourseId()]) {
          groupMembersIds[request.getCourseId()].push_back(student.getId());
          students.emplace_back(student.getId(), student.getFirstName(), student.getLastName());   
          studentIds.push_back(student.getId());
        }
        
        groupClasses.emplace_back(newId, request.getCourseId(), groupMembersIds[request.getCourseId()]);
        groupIds.push_back(newId);
        
        for (auto it_buff = approvedRequestsBuffer[request.getCourseId()].begin(); it_buff != approvedRequestsBuffer[request.getCourseId()].end(); ++it_buff) {
          approvedRequests.push_back(*it_buff);
        }

        groupBuffer[request.getCourseId()].clear();
        groupMembersIds[request.getCourseId()].clear();
        approvedRequestsBuffer.clear();
      }
    }
  }

  enrollRequests.erase(std::remove_if(enrollRequests.begin(), enrollRequests.end(),
                                        [&approvedRequests](const EnrollRequest& request) {
                                            return std::any_of(approvedRequests.begin(), approvedRequests.end(),
                                                              [&request](const EnrollRequest& approvedRequest) {
                                                                  return approvedRequest.getId() == request.getId();
                                                              });
                                        }),
                        enrollRequests.end());

  for (auto it_buff = groupBuffer.begin(); it_buff != groupBuffer.end(); ++it_buff) {
    unsigned long long courseId = it_buff->first;

    if (groupBuffer[courseId].size() >= 5) {
      std::vector<unsigned long long> studentIds;      
      for (auto student : groupBuffer[courseId]) {
        studentIds.push_back(student.getId());
      }
      
      for (auto studentId : studentIds) {
         enrollRequests.erase(std::remove_if(enrollRequests.begin(), enrollRequests.end(),
                              [studentId](const EnrollRequest& request) {
                                return request.getId() == studentId;
                              }),
                            enrollRequests.end());
      }

      groupClasses.emplace_back(getFreeId(groupIds), courseId, studentIds);
    } else {
      while (!groupBuffer[courseId].empty()) {
        for (auto group : groupClasses) {
          if (group.getCourseId() == courseId && !groupBuffer[courseId].empty()) {
            unsigned long long studentId = groupBuffer[courseId].back().getId();
            group.enrollStudent(studentId);

            enrollRequests.erase(std::remove_if(enrollRequests.begin(), enrollRequests.end(),
                                  [studentId](const EnrollRequest& request) {
                                    return request.getId() == studentId;
                                  }),
                                enrollRequests.end());
            
            groupBuffer[courseId].pop_back();
          }
        }
      }
    }
  }

  printResults(individualClasses, groupClasses, enrollRequests);
  std::cin.get();
}

#endif // CLASSES_CPP