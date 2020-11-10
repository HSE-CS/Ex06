#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime {
    public:
        int value;
        void setValue(int a);
        bool isValid();
        bool checkPrime(int a);
        int countBetween(Prime &b);
        Prime nextPrime();
        int getValue();
        unsigned long long nPrime(unsigned n);
};

#endif //TASK_PRIME_H
