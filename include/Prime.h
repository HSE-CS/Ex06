//
// Created by sharg on 10.11.2020.
//
#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime {
private:
    int primeValue;
public:
    void setValue(int);

    bool isValid() const;

    static bool checkPrime(int);

    int countBetween(Prime &) const;

    Prime nextPrime() const;

    int getValue() const;
};

#endif //TASK_PRIME_H
