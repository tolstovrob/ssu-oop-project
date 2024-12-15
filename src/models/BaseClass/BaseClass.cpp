#include "BaseClass.h"

unsigned long long BaseClass::getId() const {
  return id;
}

unsigned long long BaseClass::getCourseId() const {
  return courseId;
}

Money BaseClass::getPrice() const {
  return price;
}