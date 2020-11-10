#ifndef TEST_PRIME_H
#define TEST_PRIME_H

class Prime {
private:
    int value;
public:
    void setValue(int val);
    bool checkPrime(int val);
    bool isValid();
    int getValue();
    Prime nextPrime();
    int countBetween(Prime &val);
};

#endif //TEST_PRIME_H

