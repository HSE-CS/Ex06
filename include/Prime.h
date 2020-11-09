#ifndef PRIME_H
#define PRIME_H_

class Prime
{

public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
private:
    int value;

};
#endif