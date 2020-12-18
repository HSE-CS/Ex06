#include <iostream>
#include <string.h>

class Prime {
private:
    int prime;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};