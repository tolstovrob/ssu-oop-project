#pragma once
#ifndef GROUPCLASS_H
#define GROUPCLASS_H

#include <iostream>
#include <string>
#include <vector>

#include "models/BaseClass.h"

class GroupClass : public BaseClass {
  private:
    std::vector<std::pair<unsigned long long, unsigned short int>> enrolledStudents;

  public:
    GroupClass(unsigned long long id, unsigned long long courseId, 
               std::vector<std::pair<unsigned long long, unsigned short int>> enrolledStudents, Money price)
        : BaseClass(id, courseId, price), enrolledStudents(enrolledStudents) {}

    unsigned short getGroupSize() const {
        return static_cast<unsigned short>(enrolledStudents.size());
    }

    std::vector<std::pair<unsigned long long, unsigned short int>> getEnrolledStudents() const {
        return enrolledStudents;
    }

    bool enrollStudent(unsigned long long studentId) override {
        for (const auto& student : enrolledStudents) {
            if (student.first == studentId) {
                return false;
            }
        }
        enrolledStudents.emplace_back(studentId, true);
        return true;
    }

    bool dropStudent(unsigned long long studentId) override {
        for (auto it = enrolledStudents.begin(); it != enrolledStudents.end(); ++it) {
            if (it->first == studentId) {
                enrolledStudents.erase(it);
                return true;
            }
        }
        return false;
    }

    bool isStudentEnrolled(unsigned long long studentId) const override {
        for (const auto& student : enrolledStudents) {
            if (student.first == studentId) {
                return true;
            }
        }
        return false;
    }
};

#endif // GROUPCLASS_H