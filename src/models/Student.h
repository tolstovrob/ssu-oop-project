#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
  private:
    unsigned long long id;
    std::string firstName, lastName;

  public:
    Student(unsigned long long id, std::string firstName, std::string lastName) : id(id), firstName(firstName), lastName(lastName) {}

    unsigned long long getId() const {
      return id;
    }

    std::string getFirstName() const {
      return firstName;
    }

    std::string getLastName() const {
      return lastName;
    }

    std::string getFullName() const {
      return firstName + " " + lastName;
    }
};

#endif // STUDENT_H