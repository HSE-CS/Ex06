#include "Prime.h"

void Prime::setValue(int val) {
    this->value = val;
}

int Prime::getValue() {
    return this->value;
}

bool Prime::checkPrime(int val) {
    if (val == 1) return false;
    for (int i = 2; i <= val / 2; i++) {
        if (val % i == 0) return false;
    }
    return true;
}

bool Prime::isValid() {
    return checkPrime(this->value);
}

Prime Prime::nextPrime() {
    int a = getValue() + 1;
    while (!checkPrime(a))
        a++;
    Prime prime{};
    prime.setValue(a);
    return prime;
}

int Prime::countBetween(Prime &prime) {
    int a = prime.value < this->value ? prime.value : this->value;
    int b = prime.value > this->value ? prime.value : this->value;
    Prime temp{};
    temp.setValue(a);
    int counter = 0;
    for (temp = temp.nextPrime(); temp.value < b; temp = temp.nextPrime()) {
        counter++;
    }
    return counter;
}