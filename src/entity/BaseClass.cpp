#pragma once
#ifndef BASECLASS_CPP
#define BASECLASS_CPP

#include "entity/Identifiable.cpp"
#include "entity/Money.cpp"

class BaseClass : public Identifiable {
  private:
    unsigned long long courseId;
    Money price;

  public:
    BaseClass(unsigned long long id, unsigned long long courseId, long wholePrice, unsigned short fractionPrice) : Identifiable(id), courseId(courseId), price(wholePrice, fractionPrice) {}
    ~BaseClass() override {}

    unsigned long long getCourseId() const {
      return courseId;
    }

    Money getPrice() const {
      return price;
    }

    virtual bool enrollStudent(unsigned long long studentId);
    virtual bool dropStudent(unsigned long long studentId);
    virtual bool isStudentEnrolled(unsigned long long studentId) const;
};

#endif // BASECLASS_CPP