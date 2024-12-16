#pragma once
#ifndef ENROLL_H
#define ENROLL_H

#include <iostream>
#include <string>

#include "models/Course/Course.h"
#include "models/Identifiable/Identifiable.h"

class EnrollRequest : public Identifiable {
  private:
    unsigned long long courseId;
    std::string firstName, lastName;

  public:
    EnrollRequest(unsigned long long id, unsigned long long courseId, std::string firstName, std::string lastName) : Identifiable(id), courseId(courseId), firstName(firstName), lastName(lastName) {}

    unsigned long long getId() const override;
    unsigned long long getCourseId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
};

#endif // ENROLL_H