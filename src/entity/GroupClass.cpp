#pragma once
#ifndef GROUPCLASS_CPP
#define GROUPCLASS_CPP

#include <vector>
#include <algorithm>

#include "entity/BaseClass.cpp"

class GroupClass : public BaseClass {
  private:
    std::vector<unsigned long long> studentIds;
  
  public:
    GroupClass(unsigned long long id, unsigned long long courseId, const std::vector<unsigned long long> studentIds) : BaseClass(id, courseId), studentIds(studentIds) {}
    ~GroupClass() override {}

    std::vector<unsigned long long> getStudentIds() const {
      return studentIds;
    }

    bool enrollStudent(unsigned long long studentId) override {
      if (std::find(studentIds.begin(), studentIds.end(), studentId) == studentIds.end()) {
        studentIds.push_back(studentId);
        return true;
      }
      return false;
    }

    bool dropStudent(unsigned long long studentId) override {
      auto it = std::find(studentIds.begin(), studentIds.end(), studentId);
      if (it != studentIds.end()) {
        studentIds.erase(it);
        return true;
      }
      return false;
    }

    bool isStudentEnrolled(unsigned long long studentId) const override {
      return std::find(studentIds.begin(), studentIds.end(), studentId) != studentIds.end();
    }
};

#endif // GROUPCLASS_CPP