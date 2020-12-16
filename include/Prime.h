#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime{
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();

private:
    unsigned int value;
};

#endif //TASK_PRIME_H
