//
// Created by Алексей Трутнев on 09.11.2020.
//

#ifndef UNTITLED12_PRIME_H
#define UNTITLED12_PRIME_H

class Prime {
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();

private:
    int value;
    bool prime;
};

#endif //UNTITLED12_PRIME_H
