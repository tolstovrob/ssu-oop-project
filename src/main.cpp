#include <iostream>
#include <string>
#include <vector>

#include "models/EnrollRequest/EnrollRequest.h"
#include "models/GroupClass/GroupClass.h"
#include "models/IndividualClass/IndividualClass.h"
#include "models/Course/Course.h"
#include "models/Student/Student.h"
#include "models/Money/Money.h"

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