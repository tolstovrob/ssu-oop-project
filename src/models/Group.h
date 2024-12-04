#pragma once
#ifndef GROUP_H
#define GROUP_H

#include <iostream>
#include <string>
#include <vector>

#include "models/Money.h"

class Group {
  private:
    unsigned long long id;
    unsigned long long courseId;
    std::vector<std::pair<unsigned long long, bool>> enrolledStudents;
    Money price;

  public:
    Group(unsigned long long id, unsigned long long courseId, std::vector<std::pair<unsigned long long, bool>> students, Money price) : id(id), courseId(courseId), enrolledStudents(students), price(price) {}

    unsigned long long getId() const {
      return id;
    }

    unsigned long long getCourseId() const {
      return courseId;
    }

    Money getPrice() const {
      return price;
    }

    unsigned short getGroupSize() const {
      return static_cast<unsigned short>(enrolledStudents.size());
    }

    std::vector<std::pair<unsigned long long, bool>> getEnrolledStudents() const {
      return enrolledStudents;
    }

    bool enrollStudent(unsigned long long studentId) const {
      // Implement logic to enroll a student in the group
      // Return true if successful, false otherwise

      return true;
    }

    bool dropStudent(unsigned long long studentId) const {
      // Implement logic to drop a student from the group
      // Return true if successful, false otherwise

      return true;
    }

    bool isStudentEnrolled(unsigned long long studentId) const {
      // Implement logic to check if a student is enrolled in the group
      // Return true if enrolled, false otherwise

      return false;
    }
};

#endif // GROUP_H