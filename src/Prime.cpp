#include <stdio.h>

#include "Prime.h"

#include <iostream>
#include <cstdlib>

void Prime::setValue(int v) {
    this->prime = v;
}

bool Prime::isValid() {
    return this->checkPrime(this->prime);
}

bool Prime::checkPrime(int v) {
    for (int check = 2; check < v; check++) {
        if (v % check == 0)
            return false;
    }
    return true;
}

int Prime::countBetween(Prime& second_prime) {
    int number_of_prime = 0;
    Prime first_prime = this->nextPrime();

    while (first_prime.getValue() < second_prime.getValue())
    {
        number_of_prime++;
        first_prime = first_prime.nextPrime();
    };

    return number_of_prime;


}

Prime Prime::nextPrime() {
    int next_prime = this->prime;
    while (!checkPrime(++next_prime));
    Prime* new_prime = new Prime();
    new_prime->setValue(next_prime);
    return *new_prime;
}

int Prime::getValue() {
    return this->prime;
}