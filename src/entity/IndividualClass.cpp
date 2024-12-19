#pragma once
#ifndef INDIVIDUAL_CPP
#define INDIVIDUAL_CPP

#include "entity/BaseClass.cpp"

class IndividualClass : public BaseClass {
  private:
    unsigned long long studentId;
  
  public:
    IndividualClass(unsigned long long id, unsigned long long courseId, unsigned long long studentId, long wholePrice, unsigned short fractionPrice) : BaseClass(id, courseId, wholePrice, fractionPrice), studentId(studentId) {}
    ~IndividualClass() override {}

    bool enrollStudent(unsigned long long studentId) override {
      if (this->studentId == studentId) {
        return false;
      }
      
      this->studentId = studentId;
      return true;
    }

    bool dropStudent(unsigned long long studentId) override {
      delete this;
      return true;
    }

    bool isStudentEnrolled(unsigned long long studentId) const override {
      return this->studentId == studentId;
    }
};

#endif // INDIVIDUAL_CPP