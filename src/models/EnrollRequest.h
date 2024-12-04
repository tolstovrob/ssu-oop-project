#pragma once
#ifndef ENROLL_H
#define ENROLL_H

#include <iostream>
#include <string>

#include "models/Course.h"

class EnrollRequest {
  private:
    unsigned long long id, courseId;
    std::string firstName, lastName;

  public:EnrollRequest(unsigned long long id, unsigned long long courseId, std::string firstName, std::string lastName) : id(id), courseId(courseId), firstName(firstName), lastName(lastName) {}

  unsigned long long getId() const {
    return id;
  }

  unsigned long long getCourseId() const {
    return courseId;
  }

  std::string getFirstName() const {
    return firstName;
  }

  std::string getLastName() const {
    return lastName;
  }
};

#endif // ENROLL_H