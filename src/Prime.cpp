#include "Prime.h"
#include <iostream>

void Prime::setValue(int n) {
    value = n;
    prime = checkPrime(n);
}
bool Prime::isValid() {
    return checkPrime(this->value);
}
bool Prime::checkPrime(int a) {
    if (val == 1)
        return false;
    for (auto i = 2; i <= sqrt(val); i++)
    {
        if (val % i == 0)
            return false;
    }
    return true;
}
int Prime::countBetween(Prime& temp) {
    int min_val = std::min(prime.value, this->value);
    int max_val = std::max(prime.value, this->value);
    Prime curr_prime;
    curr_prime.setValue(min_val);
    curr_prime.setNextPrime();
    int count = 0;
    while (curr_prime.value < max_val)
    {
        count++;
        curr_prime.setNextPrime();
    }
    return count;
}

Prime Prime::nextPrime() {
    this->setValue(this->nextPrime().getValue());
}

int Prime::getValue() {
    return value;
}


