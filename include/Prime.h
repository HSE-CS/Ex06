#ifndef PRIME_H
#define PRIME_H
#include <iostream>

class Prime
{
private:
    int value;

public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime &);
    Prime nextPrime();
    int getValue();
};

#endif