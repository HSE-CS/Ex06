#ifndef PRIME_H
#define PRIME_H

#include <iostream>
#include <typeinfo>
#include <cmath>


class Prime{
private:
    int settedNumber;
public:
    void setValue(int);
    bool isValid();
    bool testPrime(int); 
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();

};




#endif //end of PRIME_H