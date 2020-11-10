#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime {

private:
    int val;

public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime &);
    Prime nextPrime();
    int getValue();

};

#endif //TASK_PRIME_H
