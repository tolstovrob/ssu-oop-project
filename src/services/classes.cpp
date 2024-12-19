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

void printIndividualClasses(const std::vector<IndividualClass>& individualClasses) {
    std::cout << "\nИндивидуальные занятия:\n";
    std::cout << std::setw(10) << "ID" 
              << std::setw(15) << "Курс ID" 
              << std::setw(15) << "Студент ID" << "\n";
    std::cout << std::string(40, '-') << "\n";

    for (const auto& individual : individualClasses) {
        std::cout << std::setw(10) << individual.getId() 
                  << std::setw(15) << individual.getCourseId() 
                  << std::setw(15) << individual.getId() << "\n";
    }
}

void printGroupClasses(const std::vector<GroupClass>& groupClasses) {
    std::cout << "\nГрупповые занятия:\n";
    std::cout << std::setw(10) << "ID" 
              << std::setw(15) << "Курс ID" 
              << std::setw(25) << "Студенты IDs" << "\n";
    std::cout << std::string(50, '-') << "\n";

    for (const auto& group : groupClasses) {
        std::cout << std::setw(10) << group.getId() 
                  << std::setw(15) << group.getCourseId() 
                  << std::setw(25);
            std::vector<unsigned long long> groupIds;
            
            std::transform(groupClasses.begin(), groupClasses.end(), std::back_inserter(groupIds),
                   [](const GroupClass& groupClass) { return groupClass.getId(); });
        for (const auto& studentID : groupIds) {
            std::cout << studentID << " ";
        }
        std::cout << "\n";
    }
}

void printRemainingEnrollRequests(const std::vector<EnrollRequest>& enrollRequests) {
    if (enrollRequests.empty()) {
        return;
    }

    std::cout << "\nОставшиеся заявки на зачисление:\n";
    std::cout << std::setw(10) << "ID" 
              << std::setw(15) << "Имя" 
              << std::setw(15) << "Фамилия" 
              << std::setw(10) << "Курс ID" 
              << std::setw(10) << "Инд."
              << "\n";
    std::cout << std::string(70, '-') << "\n";

    for (const auto& request : enrollRequests) {
        std::cout << std::setw(10) << request.getId() 
                  << std::setw(15) << request.getFirstName() 
                  << std::setw(15) << request.getLastName() 
                  << std::setw(10) << request.getCourseId() 
                  << std::setw(10) << (request.getIsIndividual() ? "Да" : "Нет") 
                  << "\n";
    }
}

void processEnrollRequests(std::vector<EnrollRequest>& enrollRequests,
                           std::vector<IndividualClass>& individualClasses,
                           std::vector<GroupClass>& groupClasses) {
    std::vector<unsigned long long> currentGroup, individualIds, groupIds;
    individualIds.reserve(individualClasses.size());
    groupIds.reserve(groupClasses.size());

    std::transform(individualClasses.begin(), individualClasses.end(), std::back_inserter(individualIds),
                   [](const IndividualClass& individualClass) { return individualClass.getId(); });

    std::transform(groupClasses.begin(), groupClasses.end(), std::back_inserter(groupIds),
                   [](const GroupClass& groupClass) { return groupClass.getId(); });

    for (const auto& request : enrollRequests) {
        if (request.getIsIndividual()) {
            unsigned long long newID = getFreeId(individualIds);
            individualClasses.emplace_back(newID, request.getCourseId(), request.getId());
        } else {
            currentGroup.push_back(request.getId());

            if (currentGroup.size() >= 10) {
                unsigned long long newID = getFreeId(groupIds);
                groupClasses.emplace_back(newID, request.getCourseId(), currentGroup);
                
                for (size_t i = 0; i < enrollRequests.size(); ++i) {
                    if (std::find(currentGroup.begin(), currentGroup.end(), enrollRequests[i].getId()) != currentGroup.end()) {
                        enrollRequests.erase(enrollRequests.begin() + i);
                    }
                }

                currentGroup.clear();
            }
        }
    }

    if (!currentGroup.empty()) {
        unsigned long long newID = getFreeId(groupIds);

        for (size_t i = 0; i < enrollRequests.size(); ++i) {
            if (std::find(currentGroup.begin(), currentGroup.end(), enrollRequests[i].getId()) != currentGroup.end()) {
                enrollRequests.erase(enrollRequests.begin() + i);
            }
        }

        if (currentGroup.size() >= 5) {
            groupClasses.emplace_back(newID, enrollRequests[0].getCourseId(), currentGroup);
        }
    }

    auto it = std::remove_if(enrollRequests.begin(), enrollRequests.end(),
                             [](const EnrollRequest& request) { return request.getIsIndividual() || request.getId() == 0; });

    enrollRequests.erase(it, enrollRequests.end());

    // Вывод информации о занятиях и оставшихся заявках
    printIndividualClasses(individualClasses);
    printGroupClasses(groupClasses);
    printRemainingEnrollRequests(enrollRequests);
}


#endif // CLASSES_CPP