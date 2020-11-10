//
// Created by Vadim Makarov on 10.11.2020.
//

#include <iostream>
#include <cmath>
#include "Prime.h"


using namespace std;


void Prime::setValue(int value) {
    this->value = value;
}

bool Prime::isValid() {
    for(int i = 2; i<=sqrt(value);i++)
        if(value % i == 0)
            return false;
    return true;
}

bool Prime::checkPrime(int value) {
    for(int i = 2; i<=sqrt(value);i++)
        if(value % i == 0)
            return false;
    return true;
}

int Prime::countBetween(Prime &prime) {
    int counter = 0;
    for (int i = min(prime.value, value) + 1; i < max(prime.value, value); ++i) {
        if(checkPrime(i)){
            counter++;
        }
    }
    return counter;
}

Prime Prime::nextPrime() {
    int i = value + 1;
    while(!checkPrime(i)){
        i++;
    }
    value = i;
    return *this;
}

int Prime::getValue() {
    return value;
}


