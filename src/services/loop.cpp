#pragma once
#ifndef LOOP_CPP
#define LOOP_CPP

#include <iostream>
#include <vector>
#include <memory>
#include <limits>

#include "entity/Course.cpp"
#include "entity/EnrollRequest.cpp"
#include "entity/Student.cpp"
#include "entity/GroupClass.cpp"
#include "entity/IndividualClass.cpp"

#include "courses.cpp"
#include "enrollRequests.cpp"
#include "classes.cpp"

#include "utils/utils.cpp"


bool loop(unsigned long long iteration,
          std::vector<Course> &courses,
          std::vector<EnrollRequest> &enrollRequests,
          std::vector<Student> &students,
          std::vector<GroupClass> &groupClasses,
          std::vector<IndividualClass> &individualClasses) {

  bool error = false;
  clearConsole();

  std::cout << "Итерация: " << iteration << std::endl;
  if (iteration == 0) {
    std::cout << "Загрузите начальные состояния..." << std::endl;
  } else {
    std::cout << "Обновляем состояния..." << std::endl;
  }

  // Courses
  std::cout << std::endl << "\033[1mУПРАВЛЕНИЕ КУРСАМИ\033[0m" << std::endl;
  manageCourses(courses);

  // Enrolls
  std::cout << std::endl << "\033[1mУПРАВЛЕНИЕ ЗАЯВКАМИ\033[0m" << std::endl;
  manageEnrollRequests(enrollRequests, courses);

  // Students
  // Form groups
  // Form individual classes
  std::cout << std::endl << "\033[1mФОРМИРОВАНИЕ ЗАЯВОК\033[0m" << std::endl;
  processEnrollRequests(enrollRequests, individualClasses, groupClasses, students);

  // Accident stuff
  
  std::cout << "2 weeks have passed" << std::endl;
  
  // Display info

  return true;
};

#endif // LOOP_CPP