//
// Created by freeb on 09.11.2020.
//

#ifndef TASK_PRIME_H
#define TASK_PRIME_H


class Prime {
private:
    int value;
public:
    void setValue(int x);
    bool isValid();
    bool checkPrime(int x);
    int countBetween(Prime& x);
    Prime nextPrime();
    int getValue();
};


#endif //TASK_PRIME_H
