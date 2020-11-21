//
// Created by Данил on 21.11.2020.
//

#include "../include/Prime.h"


int min(int fi, int se) {
    return fi < se ? fi : se;
}

int max(int fi, int se) {
    return fi > se ? fi : se;
}


void Prime::setValue(int given_value) {
    this->value = given_value;
}

bool Prime::isValid() {
    return checkPrime(this->value);
}

bool Prime::checkPrime(int given_value) {
    bool isPrime = true;

    for (int divider = 2; divider * divider <= given_value; ++divider)
        if (!(given_value % divider)) {
            isPrime = false;
            break;
        }
    return isPrime;
}

int Prime::countBetween(Prime &other) {
    int counter = 0;

    for (int number = min(other.value, this->value); number < max(other.value, this->value); ++number)
        if (checkPrime(number))
            counter += checkPrime(number) ? 1 : 0;

    return counter;
}

Prime Prime::nextPrime() {
    Prime newNumber{};

    for (int number = this->value + 1;; ++number)
        if (checkPrime(number)) {
            newNumber.setValue(number);
            break;
        }

    return newNumber;
}

int Prime::getValue() {
    return this->value;
}
