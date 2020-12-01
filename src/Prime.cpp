/*
 * @author Stanislav Stoianov
 */

#include <algorithm>
#include "../include/Prime.h"

void Prime::setValue(int value) { this->integer = value; }

int Prime::getValue() const { return this->integer; }

bool Prime::isValid() const {
    if (this->integer < 2) return false;
    for (unsigned int i = 2; i < this->integer; i++)
        if (this->integer % i == 0) return false;
    return true;
}

bool Prime::checkPrime(int value) {
    auto *prime = new Prime(value);
    return prime->isValid();
}

int Prime::countBetween(Prime &prime) const {
    if (this->integer == prime.getValue()) return 0;
    Prime first, second;
    first.setValue(std::min(this->integer, prime.getValue()));
    second.setValue(std::max(this->integer, prime.getValue()));
    int counter = 0;
    while (first.getValue() < second.getValue()) {
        first = first.nextPrime();
        counter++;
    }
    return counter - 1;
}

Prime Prime::nextPrime() const {
    Prime prime;
    prime.setValue(this->integer + 1);
    while (!prime.isValid())
        prime.setValue(prime.getValue() + 1);
    return prime;
}



