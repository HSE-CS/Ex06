#ifndef PRIME_H
#define PRIME_H

#include <cmath>

class Prime {
public:
  void setValue(int);
  bool isValid();
  bool testPrime(int);
  int countBetween(Prime&);
  Prime nextPrime();
  int getValue();
private:
  int num;
};

#endif