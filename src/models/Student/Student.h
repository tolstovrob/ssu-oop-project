#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "models/Identifiable/Identifiable.h"

class Student : public Identifiable {
  private:
    std::string firstName, lastName;

  public:
    Student(unsigned long long id, std::string firstName, std::string lastName) : Identifiable(id), firstName(firstName), lastName(lastName) {}

    unsigned long long getId() const override;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getFullName() const;
};

#endif // STUDENT_H