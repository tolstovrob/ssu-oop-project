#pragma once
#ifndef ENROLLREQUEST_CPP
#define ENROLLREQUEST_CPP

#include "entity/Identifiable.cpp"
#include "entity/Student.cpp"

class EnrollRequest : public Student {
  private:
    unsigned long long courseId;
    bool isIndividual;

  public:
    EnrollRequest(unsigned long long id, const std::string firstName, const std::string lastName, unsigned long long courseId, bool isIndividual) : Student(id, firstName, lastName), courseId(courseId), isIndividual(isIndividual) {}
    ~EnrollRequest() override {}

    unsigned long long getCourseId() const {
      return courseId;
    }
};

#endif // ENROLLREQUEST_CPP
