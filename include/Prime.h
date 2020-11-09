#ifndef TASK_PRIME_H
#define TASK_PRIME_H

#include <iostream>
using namespace std;

class Prime {
private:
    int value;
public:
    int getValue ();
    void setValue (int x);
    bool isValid ();
    bool checkPrime (int x);
    int countBetween(Prime &p);
    Prime nextPrime();

};


#endif //TASK_PRIME_H
