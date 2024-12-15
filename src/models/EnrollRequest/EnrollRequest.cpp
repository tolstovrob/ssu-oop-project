#include "EnrollRequest.h"

unsigned long long EnrollRequest::getId() const {
  return id;
}

unsigned long long EnrollRequest::getCourseId() const {
  return courseId;
}

std::string EnrollRequest::getFirstName() const {
  return firstName;
}

std::string EnrollRequest::getLastName() const {
  return lastName;
}