#pragma once
#ifndef LOOP_CPP
#define LOOP_CPP

#include <iostream>
#include <vector>
#include <memory>

#include "models/EnrollRequest/EnrollRequest.h"
#include "models/GroupClass/GroupClass.h"
#include "models/IndividualClass/IndividualClass.h"
#include "models/Course/Course.h"
#include "models/Student/Student.h"
#include "models/Money/Money.h"

#include "utils/utils.cpp"

std::pair<bool, unsigned short int> formCourses(std::vector<std::shared_ptr<Course>> &courses) {
  char choice;

  std::cout << "Формирование курсов (Y/N)? ";
  std::cin >> choice;

  if (choice != 'Y' || choice != 'y') {
    return std::make_pair(true, 0);
  }

  unsigned long long iteration = 0;
  std::vector<unsigned long long> courseIds;

  for (const auto& course : courses) {
    courseIds.push_back(course->getId());
  }

  while (choice != 'N' != 'n' && choice != 'N') {
    iteration++;
    std::cout << "Курс " << iteration << "#" << std::endl;

    unsigned long long id = getFreeId(courseIds);
    std::cout << "ID: " << id << std::endl;

    std::string language;
    std::cout << "Название языка: ";
    std::cin.ignore();
    std::getline(std::cin, language);

    Level level;
    std::string levelStr;
    while (true) {
      std::cout << "Уровень (A1/A2/B1/B2/C1/C2): ";
      std::cin >> levelStr;

      if (levelStr == "A1") {
          level = A1;
          break;
      } else if (levelStr == "A2") {
          level = A2;
          break;
      } else if (levelStr == "B1") {
          level = B1;
          break;
      } else if (levelStr == "B2") {
          level = B2;
          break;
      } else if (levelStr == "C1") {
          level = C1;
          break;
      } else if (levelStr == "C2") {
          level = C2;
          break;
      } else {
          std::cout << "Неверный уровень" << std::endl;
      }
    }

    Intensity intensity;
    std::string intensityStr;
    while (true) {
      std::cout << "Интенсивность (0 (продолжающе) / 1 (обычно) / 2 (интенсивно)): ";
      std::cin >> intensityStr;

      if (intensityStr == "0") {
        intensity = CONTINUOUS;
      } else if (intensityStr == "1") {
        intensity = DEFAULT;
      } else if (intensityStr == "2") {
        intensity = INTENSIVE;
      } else {
          std::cout << "Неверный уровень" << std::endl;
          break;
      }
    }

    courses.emplace_back(std::make_shared<Course>(id, language, level, intensity));
    courseIds.push_back(id);

    std::cout << "Добавить ещё один курс? (Y/N)? ";
    std::cin >> choice;
  }

  return std::make_pair(true, iteration);
}

bool loop(unsigned long long iteration,
          std::vector<std::shared_ptr<EnrollRequest>> &enrollRequests,
          std::vector<std::shared_ptr<Student>> &students,
          std::vector<std::shared_ptr<Course>> &courses,
          std::vector<std::shared_ptr<GroupClass>> &groupClasses,
          std::vector<std::shared_ptr<IndividualClass>> &individualClasses) {

  bool error = false;

  std::cout << "Итерация: " << iteration << std::endl;
  if (iteration == 0) {
    std::cout << "Загрузите начальные состояния..." << std::endl;
  } else {
    std::cout << "Обновляем состояния..." << std::endl;
  }

  // Courses
  formCourses(courses);
  for (const auto& course : courses) {
        std::cout << course->getId() << " " << course->getLanguage() << " "<< course->getLevel() << " " << course->getIntensity() << " ";
    }

  // Enrolls
  // Students
  // Form groups
  // Form individual classes
  // Accident stuff
  
  std::cout << "2 weeks have passed" << std::endl;
  
  // Display info

  return true;
};

#endif // LOOP_H