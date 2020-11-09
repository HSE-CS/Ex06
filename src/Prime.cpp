//
// Created by freeb on 09.11.2020.
//

#include "Prime.h"

void Prime::setValue(int x){
    value=x;
}

bool Prime::isValid() {
    return Prime::checkPrime(value);
}

bool Prime::checkPrime(int x) {
    if (x % 2 == 0) { return x == 2; }
    unsigned int d = 3;
    while (d * d <= x and x % d != 0) {
        d += 2;
    }
    return d * d > x;
}

int Prime::countBetween(Prime &x) {
    int c = 0;
    if (value < x.value){
        for (int i = value; i < x.value; ++i) {
            if (Prime::checkPrime(i)) { c++; }
        }
    }
    else if (x.value < value) {
        for (int i = x.value; i < value; ++i) {
            if (Prime::checkPrime(i)) { c++; }
        }
    }
    return c;
}

Prime Prime::nextPrime() {
    int i = ++value;
    for (;!Prime::checkPrime(i);++i);
    Prime p{};
    p.setValue(i);
    return p;
}

int Prime::getValue() {
    return value;
}
