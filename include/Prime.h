//
// Created by Данил on 21.11.2020.
//

#ifndef TASK_PRIME_H
#define TASK_PRIME_H

#include <iostream>

class Prime {

private:
    int value;

public:

    Prime() = default;

    void setValue(int given_value);

    int getValue();

    bool isValid();

    bool checkPrime(int given_value);

    int countBetween(Prime& other);

    Prime nextPrime();

};

#endif //TASK_PRIME_H
