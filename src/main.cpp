#include <iostream>
#include <string>
#include <vector>

#include "models/EnrollRequest.h"
#include "models/GroupClass.h"
#include "models/IndividualClass.h"
#include "models/Course.h"
#include "models/Student.h"
#include "models/Money.h"

int main() {
  EnrollRequest enrollRequest(1, 1, "John", "Doe");
  GroupClass group(2, 1, {{enrollRequest.getId(), true}, {3, false}}, Money(1000, 0));
  IndividualClass individual(2, 1, {enrollRequest.getId(), true}, Money(1000, 0));
  Course course(3, "Introduction to Programming", A1, INTENSIVE);
  Student student(4, "Jane", "Doe");

  std::cout << "All models has been loaded successfully!" << std::endl;
  return 0;  
}