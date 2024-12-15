#include <iostream>
#include <string>
#include <vector>

#include "models/EnrollRequest.h"
#include "models/GroupClass.h"
#include "models/IndividualClass.h"
#include "models/Course.h"
#include "models/Student.h"
#include "models/Money.h"

#include "services/loop.cpp"

int main() {
  std::vector<EnrollRequest> enrollRequests;
  std::vector<Student> students;
  std::vector<Course> courses;
  std::vector<GroupClass> groupClasses;
  std::vector<IndividualClass> individualClasses;

  while (true) {
    loop();
    std::cin.get();
  }

  std::cout << "All models has been loaded successfully!" << std::endl;
  return 0;  
}