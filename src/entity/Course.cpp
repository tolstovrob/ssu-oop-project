#pragma once
#ifndef COURSE_CPP
#define COURSE_CPP

#include <string>

#include "entity/Identifiable.cpp"
#include "entity/Money.cpp"

enum Level { A1, A2, B1, B2, C1, C2 };
enum Intensity { INTENSIVE, DEFAULT, CONTINUOUS };

class Course : public Identifiable {
  private:
    std::string language;
    Level level;
    Intensity intensity;
    Money priceGroup, priceIndividual;
    
  public:
    Course(unsigned long long id, const std::string language, Level level, Intensity intensity, long wholeGroup, unsigned short fractionGroup, long wholeIndividual, unsigned short fractionIndividual) : Identifiable(id), language(language), level(level), intensity(intensity), priceGroup(wholeGroup, fractionGroup), priceIndividual(wholeIndividual, fractionIndividual) {}

    Course(unsigned long long id, const std::string language, Level level, Intensity intensity, Money priceGroup, Money priceIndividual) : Identifiable(id), language(language), level(level), intensity(intensity), priceGroup(priceGroup), priceIndividual(priceIndividual) {}
    ~Course() override {}

    std::string getLanguage() const {
      return language;
    }

    Level getLevel() const {
      return level;
    }

    Intensity getIntensity() const {
      return intensity;
    }

    Money getPriceGroup() const {
      return priceGroup;
    }

    Money getPriceIndividual() const {
      return priceIndividual;
    }

    std::string getLevelString() const {
      switch (level) {
        case A1: return "A1";
        case A2: return "A2";
        case B1: return "B1";
        case B2: return "B2";
        case C1: return "C1";
        case C2: return "C2";
        default: return "-";
      }
    }

    std::string getIntensityString() const {
      switch (intensity) {
        case INTENSIVE: return "INTENSIVE";
        case DEFAULT: return "DEFAULT";
        case CONTINUOUS: return "CONTINUOUS";
        default: return "-";
      }
    }

    std::string getPriceGroupString() const {
      return std::to_string(getPriceGroup().getWhole()) + " цел. " + std::to_string(getPriceGroup().getFraction()) + " дроб.";
    }

    std::string getPriceIndividualString() const {
      return std::to_string(getPriceIndividual().getWhole()) + " цел. " + std::to_string(getPriceIndividual().getFraction()) + " дроб.";
    }
};
  

#endif // COURSE_CPP