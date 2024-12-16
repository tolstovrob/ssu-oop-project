#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "models/EnrollRequest/EnrollRequest.h"
#include "models/GroupClass/GroupClass.h"
#include "models/IndividualClass/IndividualClass.h"
#include "models/Course/Course.h"
#include "models/Student/Student.h"
#include "models/Money/Money.h"

#include "services/loop.cpp"

int main() {
  setlocale(LC_ALL, "ru_RUSSIAN.UTF-8");
  std::vector<std::shared_ptr<EnrollRequest>> enrollRequests;
  std::vector<std::shared_ptr<Student>> students;
  std::vector<std::shared_ptr<Course>> courses;
  std::vector<std::shared_ptr<GroupClass>> groupClasses;
  std::vector<std::shared_ptr<IndividualClass>> individualClasses;

  std::cout << "Добро пожаловать в систему контроля курсов иностранных языков" << std::endl;
  std::cout << "Нажмите любую клавишу для продолжения..." << std::endl;
  std::cin.get();

  unsigned long long iteration = 0;
  while (true) {
    if (!loop(iteration, enrollRequests, students, courses, groupClasses, individualClasses)) {
      break;
    };
    std::cin.get();
  }

  std::cout << "Моделирование остановлено!" << std::endl;
  return 0;  
}