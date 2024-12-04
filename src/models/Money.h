#pragma once
#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>

class Money {
  private:
    unsigned long long valueIntegral;
    unsigned short valueModulo;

  public:
    Money(unsigned long long valueIntegral, unsigned short valueModulo) : valueIntegral(valueIntegral), valueModulo(valueModulo) {}

    unsigned long long getValueIntegral() const {
      return valueIntegral;
    }

    unsigned short getValueModulo() const {
      return valueModulo;
    }
};

#endif // MONEY_H