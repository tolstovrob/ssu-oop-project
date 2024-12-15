#pragma once
#ifndef INDIVIDUALCLASS_H
#define INDIVIDUALCLASS_H

#include <iostream>
#include <string>
#include <vector>

#include "models/BaseClass/BaseClass.h"

class IndividualClass : public BaseClass {
  private:
    std::pair<unsigned long long, unsigned short int> enrolledStudent;

  public:
    IndividualClass(unsigned long long id, unsigned long long courseId, 
                    std::pair<unsigned long long, unsigned short int> enrolledStudent, Money price)
        : BaseClass(id, courseId, price), enrolledStudent(enrolledStudent) {}

    std::pair<unsigned long long, unsigned short int> getEnrolledStudent() const;
    bool enrollStudent(unsigned long long studentId) override;
    bool dropStudent(unsigned long long studentId) override;
    bool isStudentEnrolled(unsigned long long studentId) const override;
};


#endif // INDIVIDUALCLASS_H