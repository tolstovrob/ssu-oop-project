#pragma once
#ifndef BASECLASS_CPP
#define BASECLASS_CPP

#include "entity/Identifiable.cpp"
#include "entity/Money.cpp"

class BaseClass : public Identifiable {
  private:
    unsigned long long courseId;

  public:
    BaseClass(unsigned long long id, unsigned long long courseId) : Identifiable(id), courseId(courseId) {}
    virtual ~BaseClass() {}

    unsigned long long getCourseId() const {
      return courseId;
    }

    virtual bool enrollStudent(unsigned long long studentId) = 0;
    virtual bool dropStudent(unsigned long long studentId) = 0;
    virtual bool isStudentEnrolled(unsigned long long studentId) const = 0;
};

#endif // BASECLASS_CPP