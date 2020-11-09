#ifndef PRIME_H_INCLUDED
#define PRIME_H_INCLUDED
#include <math.h>
#include <stdlib.h>
#include <algorithm>
class Prime
{
public:
    void setValue(int);
    int getValue();
    bool checkPrime(int);
    bool isValid();
    Prime nextPrime();
    void setNextPrime();
    int countBetween(Prime&);
private:
    int value;

};

#endif // PRIME_H_INCLUDED
