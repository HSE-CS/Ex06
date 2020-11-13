#include "../include/Prime.h"

#include <Prime.h>


int Prime::getValue() {
    return this->value;
}

void Prime::setValue(int x) {
    this->value = x;
}

bool Prime::isValid() {
    for (int i = 2; i < this->value / 2; ++i) {
        if (this->value % i == 0)
            return false;
    }
    return true;
}

bool Prime::checkPrime(int x) {
    for (int i = 2; i < x / 2+1; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int Prime::countBetween(Prime &p) {
    int counter = 0;
    for (int i = this->value + 1; i < p.getValue(); ++i) {
        if (checkPrime(i)) {
            counter++;
        }
    }
    return counter;
}

Prime Prime::nextPrime() {
    Prime p;
    int x = this->value;
    while (!checkPrime(x)){
        x++;
    }
    p.value = x;
    return p;
}
