#ifndef Prime_h
#define Prime_h

#include <iostream>

class Prime {
private:
    int prnum;
public:
    void setValue(int value);
    bool isValid() const;
    bool checkPrime(int num) const;
    int countBetween(Prime &num) const;
    Prime nextPrime() const;
    int getValue() const;
};

#endif
