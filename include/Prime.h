#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


class Prime {
private:
    int value;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};

