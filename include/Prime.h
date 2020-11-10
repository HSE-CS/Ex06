//
// Created by victor on 10.11.2020.
//

#ifndef TASK_PRIME_H
#define TASK_PRIME_H
class Prime
{
private:
    int number;
    int _countBetween(int smaller, int bigger);

public:
    void setValue(int num);
    bool isValid();
    static bool checkPrime(int num);
    int countBetween(Prime& num);
    Prime nextPrime();
    int getValue();
};
#endif //TASK_PRIME_H
