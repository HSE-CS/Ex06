#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime
{
private:
    int num;

public:
    void setValue(int set_num);
    bool isValid();
    bool testPrime(int test_num);
    int countBetween(Prime& between);
    Prime nextPrime();
    int getValue();
};

#endif //TASK_PRIME_H