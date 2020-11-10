//
// Created by islam on 10.11.2020.
//

#ifndef WORK_PRIME_H
#define WORK_PRIME_H

class Prime
{
private:
    int num = 0;
public:
    int getValue();
    bool isValid();
    bool checkPrime(int);
    Prime nextPrime();
    int countBetween(Prime&);
    void setValue(int);
};

#endif //WORK_PRIME_H
