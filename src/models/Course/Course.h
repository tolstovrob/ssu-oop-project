#pragma once
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

enum Level { A1, A2, B1, B2, C1, C2 };
enum Intensity { INTENSIVE, DEFAULT, CONTINUOUS };

class Course {
  private:
    unsigned long long id;
    std::string language;
    Level level;
    Intensity intensity;

  public:
    Course(unsigned long long id, std::string language, Level level, Intensity intensity) : id(id), language(language), level(level), intensity(intensity) {}

    unsigned long long getId() const;
    std::string getLanguage() const;
    Level getLevel() const;
    Intensity getIntensity() const;
};

#endif // COURSE_H