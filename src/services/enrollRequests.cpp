#pragma once
#ifndef ENROLLREQUESTS_CPP
#define ENROLLREQUESTS_CPP

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <iomanip>

#include "entity/EnrollRequest.cpp"
#include "entity/Course.cpp"

#include "utils/utils.cpp"

void implementEnrollRequest(std::vector<EnrollRequest> &enrollRequests, const std::vector<Course> &courses) {
    std::vector<unsigned long long> ids;
    ids.reserve(enrollRequests.size());

    std::transform(enrollRequests.begin(), enrollRequests.end(), std::back_inserter(ids),
                   [](const EnrollRequest& request) { return request.getId(); });

    unsigned long long id = getFreeId(ids);
    std::string firstName, lastName;
    unsigned long long courseId;
    char individualChoice;
    bool isIndividual;

    std::cout << "Введите имя студента: ";
    std::cin >> firstName;

    std::cout << "Введите фамилию студента: ";
    std::cin >> lastName;

    while (true) {
      std::cout << "Введите ID курса: ";
      std::cin >> courseId;

      auto courseIt = std::find_if(courses.begin(), courses.end(),
                                    [courseId](const Course& course) { return course.getId() == courseId; });

      if (courseIt != courses.end()) {
          break;
      } else {
          std::cout << "Ошибка: курс с ID " << courseId << " не найден. Пожалуйста, попробуйте снова" << std::endl;
      }
    }

    std::cout << "Индивидуальная запись? (y/n): ";
    std::cin >> individualChoice;
    isIndividual = (individualChoice == 'y' || individualChoice == 'Y');

    enrollRequests.emplace_back(id, firstName, lastName, courseId, isIndividual);
    std::cout << "Запрос на зачисление успешно добавлен!" << std::endl << std::endl;
}

void deleteEnrollRequest(std::vector<EnrollRequest> &enrollRequests) {
    unsigned long long idToDelete;

    std::cout << "Введите ID запроса на зачисление для удаления: ";
    while (true) {
        std::cin >> idToDelete;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите корректный идентификатор запроса: ";
        } else {
            break;
        }
    }

    auto it = std::remove_if(enrollRequests.begin(), enrollRequests.end(),
                             [idToDelete](const EnrollRequest& request) { return request.getId() == idToDelete; });

    if (it != enrollRequests.end()) {
        enrollRequests.erase(it, enrollRequests.end());
        std::cout << "Запрос на зачисление с ID " << idToDelete << " успешно удален!" << std::endl << std::endl;
    } else {
        std::cout << "Запрос на зачисление с ID " << idToDelete << " не найден" << std::endl << std::endl;
    }
}

void viewEnrollRequests(const std::vector<EnrollRequest> &enrollRequests) {
    if (enrollRequests.empty()) {
        std::cout << "Нет доступных запросов на зачисление" << std::endl << std::endl;
        return;
    }

    for (const auto& request : enrollRequests) {
        std::cout << "+-----------------------------+\n";
        std::cout << "| ID заявки: " << request.getId() 
                  << "\n| Имя: " << request.getFirstName() 
                  << "\n| Фамилия: " << request.getLastName() 
                  << "\n| ID курса: " << request.getCourseId() 
                  << "\n| Индивидуальная запись: " 
                  << (request.getIsIndividual() ? "Да" : "Нет") 
                  << "\n+-----------------------------+\n";
    }

    std::cout << "\n";
}

void manageEnrollRequests(std::vector<EnrollRequest> &enrollRequests, const std::vector<Course> &courses) {
    char choice;

    do {
        std::cout << "Выберите действие:\n";
        std::cout << "1. Добавить запрос на зачисление\n";
        std::cout << "2. Удалить запрос на зачисление\n";
        std::cout << "3. Просмотреть все запросы\n";
        std::cout << "4. Выход\n";

        std::cout << ">>> ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                implementEnrollRequest(enrollRequests, courses);
                break;
            case '2':
                deleteEnrollRequest(enrollRequests);
                break;
            case '3':
                viewEnrollRequests(enrollRequests);
                break;
            case '4':
                return;
            default:
                if(choice != '\n') {
                    std::cout << "Некорректный выбор. Пожалуйста, выберите снова" << std::endl;
                }
                break;
        }

    } while (true);
}

#endif // ENROLLREQUESTS_CPP
