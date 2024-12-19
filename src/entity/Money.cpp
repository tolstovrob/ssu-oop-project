#pragma once
#ifndef MONEY_CPP
#define MONEY_CPP

#include <iostream>
#include <stdexcept>

class Money {
private:
    long whole;
    unsigned short fraction;

public:
    Money(long whole = 0, unsigned short fraction = 0) : whole(whole), fraction(fraction) {
        if (fraction >= 100) {
            throw std::invalid_argument("Дробная часть должна быть меньше 100");
        }
    }


    long getWhole() const { return whole; }
    unsigned char getFraction() const { return fraction; }

    long totalFraction() const {
        return whole * 100 + fraction;
    }

    Money operator+(const Money& other) const {
        long totalWhole = whole + other.whole;
        unsigned char totalFraction = fraction + other.fraction;

        if (totalFraction >= 100) {
            totalWhole += totalFraction / 100;
            totalFraction %= 100;
        }

        return Money(totalWhole, totalFraction);
    }

    Money operator-(const Money& other) const {
        long totalFraction = this->totalFraction() - other.totalFraction();
        
        if (totalFraction < 0) {
            throw std::invalid_argument("Результат не может быть отрицательным");
        }

        return Money(totalFraction / 100, totalFraction % 100);
    }

    friend std::ostream& operator<<(std::ostream& os, const Money& money) {
        os << money.getWhole() << " единиц. " << static_cast<int>(money.getFraction()) << " дробных";
        return os;
    }
};

#endif // MONEY_CPP
