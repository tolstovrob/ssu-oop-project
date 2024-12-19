#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <memory>

#include "entity/Course.cpp"
#include "entity/EnrollRequest.cpp"
#include "entity/Student.cpp"
#include "entity/GroupClass.cpp"
#include "entity/IndividualClass.cpp"

#include "services/loop.cpp"

int main() {
  setlocale(LC_ALL, "ru_RUSSIAN.UTF-8");
  
  std::vector<Course> courses;
  std::vector<EnrollRequest> enrollRequests;
  std::vector<Student> students;
  std::vector<GroupClass> groupClasses;
  std::vector<IndividualClass> individualClasses;
  
  std::cout << "Добро пожаловать в систему контроля курсов иностранных языков" << std::endl;
  std::cout << "Нажмите любую клавишу для продолжения..." << std::endl;
  std::cin.get();

  unsigned long long iteration = 0;
  while (true) {
    if (!loop(iteration, courses, enrollRequests, students, groupClasses, individualClasses)) {
      break;
    };
    std::cin.get();
  }

  std::cout << "Моделирование остановлено!" << std::endl;
  return 0;  
}