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

    unsigned long long getId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getFullName() const;
};

#endif // STUDENT_H