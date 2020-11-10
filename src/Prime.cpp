//
// Created by sharg on 10.11.2020.
//
#include "Prime.h"

void Prime::setValue(int value) {
    primeValue = value;
}

bool Prime::isValid() const {
    return checkPrime(primeValue);
}

bool Prime::checkPrime(int value) {
    bool isPrime = true;
    unsigned int currentDivisor = 2;
    while (isPrime && currentDivisor < value / 2 + 1) {
        if (value % currentDivisor == 0) {
            isPrime = false;
        } else {
            currentDivisor++;
        }
    }
    return isPrime;
}

int Prime::getValue() const {
    return primeValue;
}

int Prime::countBetween(Prime &transmittedPrime) const {
    int transmittedPrimeValue = transmittedPrime.getValue();
    int firstPrime = primeValue, secondPrime = transmittedPrimeValue, counter = 0;
    if (firstPrime > secondPrime) {
        firstPrime = transmittedPrimeValue;
        secondPrime = primeValue;
    }
    firstPrime++;
    for (; firstPrime < secondPrime; firstPrime++) {
        if (checkPrime(firstPrime))
            counter++;
    }
    return counter;
}

Prime Prime::nextPrime() const {
    int nextPrimeValue = primeValue + 1;
    while (!checkPrime(++nextPrimeValue));
    Prime newPrime;
    newPrime.setValue(nextPrimeValue);
    return newPrime;
}