#pragma once
#ifndef CLASSES_CPP
#define CLASSES_CPP

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <iomanip>

#include "entity/EnrollRequest.cpp"
#include "entity/IndividualClass.cpp"
#include "entity/GroupClass.cpp"

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

   // Вывод оставшихся заявок на зачисление
   if (!remainingRequests.empty()) {
       std::cout << "\nОставшиеся заявки на зачисление:\n";
       std::cout << std::setw(10) << "ID" 
                 << std::setw(15) << "Имя" 
                 << std::setw(15) << "Фамилия" 
                 << "\n";

       for (const auto& request : remainingRequests) {
           std::cout << std::setw(10) << request.getId()
                     << std::setw(15) << request.getFirstName()
                     << std::setw(15) << request.getLastName()
                     << "\n";
       }
   }
}

void processEnrollRequests(std::vector<EnrollRequest>& enrollRequests,
                           std::vector<IndividualClass>& individualClasses,
                           std::vector<GroupClass>& groupClasses,
                           std::vector<Student>& students) {
  clearConsole();
  
  if (enrollRequests.empty()) {
    return;
  }

  std::vector<unsigned long long> currentGroup, individualIds, groupIds, studentIds;
  std::vector<EnrollRequest> approvedRequests;
  currentGroup.reserve(10);
  
  std::transform(individualClasses.begin(), individualClasses.end(), std::back_inserter(individualIds),
                 [](const IndividualClass& individualClass) { return individualClass.getId(); });

  std::transform(groupClasses.begin(), groupClasses.end(), std::back_inserter(groupIds),
                 [](const GroupClass& groupClass) { return groupClass.getId(); });

  std::transform(students.begin(), students.end(), std::back_inserter(studentIds),
                 [](const Student& student ) { return student.getId(); });                 

  for (EnrollRequest& request : enrollRequests) {
    std::cout << request.getFirstName() << " " << request.getLastName() << std::endl;
    std::cin.get();

    if (request.getIsIndividual()) {
      unsigned long long newId = getFreeId(individualIds);
      individualClasses.emplace_back(newId, request.getCourseId(), request.getId());
      approvedRequests.push_back(request);

      if (std::find(studentIds.begin(), studentIds.end(), request.getId()) != studentIds.end()) {
        students.emplace_back(request.getId(), request.getFirstName(), request.getLastName());
        studentIds.push_back(request.getId());
      }
    } else {
      currentGroup.push_back(request.getId());
      approvedRequests.push_back(request);


      if (std::find(studentIds.begin(), studentIds.end(), request.getId()) != studentIds.end()) {
        students.emplace_back(request.getId(), request.getFirstName(), request.getLastName());
        studentIds.push_back(request.getId());
      }

      if (currentGroup.size() == 7) {
        unsigned long long newId = getFreeId(groupIds);
        groupClasses.emplace_back(newId, request.getCourseId(), currentGroup);
        groupIds.push_back(newId);
        currentGroup.clear();
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

  printResults(individualClasses, groupClasses, enrollRequests);
}


#endif // CLASSES_CPP