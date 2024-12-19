#pragma once
#ifndef STUDENT_CPP
#define STUDENT_CPP

#include <string>

#include "entity/Identifiable.cpp"

class Student : public Identifiable {
  private:
    std::string firstName, lastName;

  public:
    Student(unsigned long long id, const std::string firstName, const std::string lastName) : Identifiable(id), firstName(firstName), lastName(lastName) {}
    virtual ~Student() {}

    const std::string getFirstName() const {
      return firstName;
    }

    const std::string getLastName() const {
      return lastName;
    }
};

#endif // STUDENT_CPP