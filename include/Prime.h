#ifndef PRIME_H
#define PRIME_H

typedef unsigned int prime_t;

class Prime
{
private:
  prime_t pr;
public:
  void setValue(int);
  bool isValid() const;
  bool testPrime(int) const;
  int countBetween(Prime&) const;
  Prime nextPrime() const;
  int getValue() const;
};
#endif
