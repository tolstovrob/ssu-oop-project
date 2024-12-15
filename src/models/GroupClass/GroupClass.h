#pragma once
#ifndef GROUPCLASS_H
#define GROUPCLASS_H

#include <iostream>
#include <string>
#include <vector>

#include "models/BaseClass/BaseClass.h"

class GroupClass : public BaseClass {
  private:
    std::vector<std::pair<unsigned long long, unsigned short int>> enrolledStudents;

  public:
    GroupClass(unsigned long long id, unsigned long long courseId, 
               std::vector<std::pair<unsigned long long, unsigned short int>> enrolledStudents, Money price)
      : BaseClass(id, courseId, price), enrolledStudents(enrolledStudents) {}

    unsigned short getGroupSize() const;
    std::vector<std::pair<unsigned long long, unsigned short int>> getEnrolledStudents() const;
    bool enrollStudent(unsigned long long studentId) override;    
    bool dropStudent(unsigned long long studentId) override;
    bool isStudentEnrolled(unsigned long long studentId) const override;
};

#endif // GROUPCLASS_H