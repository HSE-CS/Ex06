#pragma once

class Prime {
private:
    int num;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();

};