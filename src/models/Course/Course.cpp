#include "Course.h"

unsigned long long Course::getId() const {
  return id;
}

std::string Course::getLanguage() const {
  return language;
}

Level Course::getLevel() const {
  return level;
}

Intensity Course::getIntensity() const {
  return intensity;
}