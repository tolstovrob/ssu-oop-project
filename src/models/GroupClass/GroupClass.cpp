#include "GroupClass.h"

unsigned short GroupClass::getGroupSize() const {
  return enrolledStudents.size();
}

std::vector<std::pair<unsigned long long, unsigned short int>> GroupClass::getEnrolledStudents() const {
  return enrolledStudents;
}

bool GroupClass::enrollStudent(unsigned long long studentId) {
  for (const auto& student : enrolledStudents) {
    if (student.first == studentId) {
      return false;
    }
  }
  enrolledStudents.push_back({studentId, true});
  return true;
}

bool GroupClass::dropStudent(unsigned long long studentId) {
  for (auto it = enrolledStudents.begin(); it != enrolledStudents.end(); ++it) {
    if (it->first == studentId) {
      enrolledStudents.erase(it);
      return true;
    }
  }
  return false;
}

bool GroupClass::isStudentEnrolled(unsigned long long studentId) const {
  for (const auto& student : enrolledStudents) {
    if (student.first == studentId) {
      return true;
    }
  }
  return false;
}