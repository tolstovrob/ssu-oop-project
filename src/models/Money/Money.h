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
    Money(unsigned long long valueIntegral) : valueIntegral(valueIntegral), valueModulo(0) {}
    Money() : valueIntegral(0), valueModulo(0) {}
    ~Money() = default;

    unsigned long long getValueIntegral() const;
    unsigned short getValueModulo() const;
};

#endif // MONEY_H