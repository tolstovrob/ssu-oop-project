#include "Student.h"

unsigned long long Student::getId() const {
  return id;
}

std::string Student::getFirstName() const {
  return firstName;
}

std::string Student::getLastName() const {
  return lastName;
}

std::string Student::getFullName() const {
  return firstName + " " + lastName;
}