#pragma once
#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

#include <iostream>
#include <string>
#include <vector>

class Identifiable {
  protected:
    unsigned long long id;

  public:
    Identifiable(unsigned long long id) : id(id) {}
    
    virtual unsigned long long getId() const = 0;
    virtual ~Identifiable() = default;
};

#endif // IDENTIFIABLE_H