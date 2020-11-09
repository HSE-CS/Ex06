#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime
{
private:
    int num;

public:
    void setValue(int num);
    bool isValid();
    bool testPrime(int num);
    int countBetween(Prime& num);
    Prime nextPrime();
    int getValue();
};

#endif //TASK_PRIME_H