//
// Created by Vadim Makarov on 10.11.2020.
//

#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime {
private:
    int value;
public:
    void setValue(int value);
    bool isValid();
    bool checkPrime(int value);
    int countBetween(Prime& prime);
    Prime nextPrime();
    int getValue();


};

#endif //TASK_PRIME_H
