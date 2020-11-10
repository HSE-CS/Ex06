#pragma once

class Prime
{
private:
    int value=0;
public:
    void setValue(int);
     int getValue();
    bool isValid();
    bool checkPrime(int);
     int countBetween(Prime&);
   Prime nextPrime();
};
