#pragma once
#ifndef IDENTIFIABLE_CPP
#define IDENTIFIABLE_CPP

class Identifiable {
  private:
    unsigned long long id;

  public:
    Identifiable(unsigned long long id) : id(id) {}
    Identifiable() {};
    virtual ~Identifiable() {};

    unsigned long long getId() const {
      return id;
    }
};

#endif // IDENTIFIABLE_CPP