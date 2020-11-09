#include "Prime.h"
#include <iostream>

void Prime::setValue(int n) {
    value = n;
    prime = checkPrime(n);
}
bool Prime::isValid() {
    return prime;
}
bool Prime::checkPrime(int a) {

}
int Prime::countBetween(Prime& temp) {

}

Prime Prime::nextPrime() {
}

int Prime::getValue() {
    return value;
}