#pragma once
#ifndef INDIVIDUALCLASS_H
#define INDIVIDUALCLASS_H

#include <iostream>
#include <string>
#include <vector>

#include "models/BaseClass.h"

class IndividualClass : public BaseClass {
  private:
    std::pair<unsigned long long, bool> enrolledStudent;

  public:
    IndividualClass(unsigned long long id, unsigned long long courseId, 
                    std::pair<unsigned long long, bool> enrolledStudent, Money price)
        : BaseClass(id, courseId, price), enrolledStudent(enrolledStudent) {}

    std::pair<unsigned long long, bool> getEnrolledStudent() const {
        return enrolledStudent;
    }

    bool enrollStudent(unsigned long long studentId) override {
        // Логика зачисления студента в индивидуальный класс
        if (enrolledStudent.first == studentId && enrolledStudent.second) {
            return false; // Студент уже зачислен
        }
        enrolledStudent = {studentId, true};
        return true;
    }

    bool dropStudent(unsigned long long studentId) override {
        if (enrolledStudent.first == studentId && enrolledStudent.second) {
            enrolledStudent.second = false; // Удаляем зачисление студента
            return true;
        }
        return false; // Студент не найден или не зачислен
    }

    bool isStudentEnrolled(unsigned long long studentId) const override {
        return (enrolledStudent.first == studentId && enrolledStudent.second);
    }
};


#endif // INDIVIDUALCLASS_H