#pragma once
#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>
#include <string>
#include <vector>

#include "models/Money/Money.h"

class BaseClass {
  protected:
    unsigned long long id;
    unsigned long long courseId;
    Money price;

  public:
    BaseClass(unsigned long long id, unsigned long long courseId, Money price) 
        : id(id), courseId(courseId), price(price) {}

    virtual ~BaseClass() = default;

    unsigned long long getId() const;
    unsigned long long getCourseId() const;

    Money getPrice() const;

    virtual bool enrollStudent(unsigned long long studentId) = 0;
    virtual bool dropStudent(unsigned long long studentId) = 0;
    virtual bool isStudentEnrolled(unsigned long long studentId) const = 0;
};

#endif // BASECLASS_H