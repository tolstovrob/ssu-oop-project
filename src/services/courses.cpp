#pragma once
#ifndef COURSES_CPP
#define COURSES_CPP

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <iomanip>

#include "entity/Course.cpp"
#include "utils/utils.cpp"

void implementCourse(std::vector<Course> &courses) {
    std::vector<unsigned long long> ids;
    ids.reserve(courses.size());

    std::transform(courses.begin(), courses.end(), std::back_inserter(ids),
                   [](const Course& course) { return course.getId(); });

    unsigned long long id = getFreeId(ids);
    std::string language;
    Level level;
    Intensity intensity;
    Money priceGroup, priceIndividual;

    std::cout << "Введите язык курса: ";
    std::cin >> language;

    std::cout << "Введите уровень курса (0 - A1, 1 - A2, 2 - B1, 3 - B2, 4 - C1, 5 - C2): ";
    while (true) {
        int levelInput;
        std::cin >> levelInput;
        if (std::cin.fail() || levelInput < 0 || levelInput > 5) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите корректный уровень (число от 0 до 5): ";
        } else {
            level = static_cast<Level>(levelInput);
            break;
        }
    }

    std::cout << "Введите интенсивность курса (0 - INTENSIVE, 1 - DEFAULT, 2 - CONTINUOUS): ";
    while (true) {
        int intensityInput;
        std::cin >> intensityInput;
        if (std::cin.fail() || intensityInput < 0 || intensityInput > 2) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите корректную интенсивность (число от 0 до 2): ";
        } else {
            intensity = static_cast<Intensity>(intensityInput);
            break;
        }
    }

     while (true) {
        long whole;
        unsigned short fraction;

        std::cout << "Введите стоимость курса для групповых занятий (целая часть и дробная часть): ";
        std::cout << "\nЦелая часть: ";
        std::cin >> whole;

        std::cout << "Дробная часть (0-99): ";
        std::cin >> fraction;

        if (std::cin.fail() || whole < 0 || fraction >= 100) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите корректные значения (целая часть >= 0 и дробная часть < 100).\n";
        } else {
            try {
                priceGroup = Money(whole, fraction);
                break;
            } catch (const std::invalid_argument& e) {
                std::cout << "Ошибка: " << e.what() << "\n";
            }
        }
    }

    while (true) {
        long whole;
        unsigned short fraction;

        std::cout << "Введите стоимость курса для индивидуальных занятий (целая и дробная части): ";
        std::cout << "\nЦелая часть: ";
        std::cin >> whole;

        std::cout << "Дробная часть (0-99): ";
        std::cin >> fraction;

        if (std::cin.fail() || whole < 0 || fraction >= 100) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите корректные значения (целая часть >= 0 и дробная часть < 100)\n";
        } else {
            try {
                priceIndividual = Money(whole, fraction);
                break;
            } catch (const std::invalid_argument& e) {
                std::cout << "Ошибка: " << e.what() << "\n";
            }
        }
    }

    courses.emplace_back(id, language, level, intensity, priceGroup, priceIndividual);
    std::cout << "Курс успешно добавлен!" << std::endl << std::endl;
}

void deleteCourse(std::vector<Course> &courses) {
    unsigned long long idToDelete;

    std::cout << "Введите идентификатор курса для удаления: ";
    while (true) {
        std::cin >> idToDelete;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите корректный идентификатор курса: ";
        } else {
            break;
        }
    }

    auto it = std::remove_if(courses.begin(), courses.end(),
                             [idToDelete](const Course& course) { return course.getId() == idToDelete; });

    if (it != courses.end()) {
        courses.erase(it, courses.end());
        std::cout << "Курс с идентификатором " << idToDelete << " успешно удален!" << std::endl << std::endl;
    } else {
        std::cout << "Курс с идентификатором " << idToDelete << " не найден" << std::endl << std::endl;
    }
}

void viewCourses(const std::vector<Course> &courses) {
    if (courses.empty()) {
        std::cout << "Нет доступных курсов" << std::endl << std::endl;
        return;
    }

    const int blockWidth = 24;

    for (size_t i = 0; i < courses.size(); ++i) {
        const Course& course = courses[i];

        std::cout << "+----------------------+\n";
        std::cout << " ID: " << course.getId() 
                  << "\n Язык: " << course.getLanguage() 
                  << "\n Уровень: " << course.getLevelString() 
                  << "\n Интенсивность: " << course.getIntensityString() 
                  << "\n Цена груп.: " << course.getPriceGroupString() 
                  << "\n Цена инд.: " << course.getPriceIndividualString();
        std::cout << "\n+----------------------+\t";
    }
    std::cout << "\n\n";
}

void manageCourses(std::vector<Course> &courses) {
    char choice;

    do {
        std::cout << "Выберите действие:\n";
        std::cout << "1. Добавить курс\n";
        std::cout << "2. Удалить курс\n";
        std::cout << "3. Просмотреть все курсы\n";
        std::cout << "4. Выход\n";

        std::cout << ">>> ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                implementCourse(courses);
                break;
            case '2':
                deleteCourse(courses);
                break;
            case '3':
                viewCourses(courses);
                break;
            case '4':
                return;
            default:
                std::cout << "Некорректный выбор. Пожалуйста, выберите снова" << std::endl;
                break;
        }

    } while (true);
}

#endif // COURSES_CPP
