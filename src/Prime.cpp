#include "Prime.h"


void Prime::setValue(int number) {
    this->value = number;
}

bool Prime::isValid() {
    return checkPrime(this->value);
}

bool Prime::checkPrime(int val) {
    for (int i = 2; i <= sqrt(val); i++) {
        if (val % i == 0) {
            return false;
        }
    }
    return true;
}

int Prime::countBetween(Prime& num) {
    int num1 = min(this->value, num.value);
    int num2 = max(this->value, num.value);
    int counter = 0;
    while (num1 < num2)
    {
        num1++;
        if ((checkPrime(num1) == true) && (num1 != num2))
            counter++;
    }
    return counter;
}

Prime Prime::nextPrime() {
    int res = this->value + 1;
    while (!checkPrime(res)) {
        res++;
    }
    Prime result;
    result.setValue(res);
    return result;
}

int Prime::getValue() {
    return this->value;
}