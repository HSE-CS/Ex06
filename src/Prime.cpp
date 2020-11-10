#include "Prime.h"

void Prime::setValue(int value) {
    prnum = value;
}

bool Prime::isValid() const {
    for (int j = 2; j < prnum; j++) {
        if (prnum % j == 0)
            return false;
    }
    return true;
}

bool Prime::checkPrime(int num) const {
    for (int j = 2; j < num; j++) {
        if (num % j == 0)
            return false;
    }
    return true;
}

int Prime::countBetween(Prime& num) const {
    unsigned int count = 0;
    for (unsigned int i = getValue() + 1; i < num.getValue(); i++)
        if (checkPrime(i) == 1)
            count++;
    return count;
}

Prime Prime::nextPrime() const {
    unsigned int diff = 1;
    while (checkPrime(prnum + diff) == 0)
        diff++;
    Prime next;
    next.setValue(prnum + diff);
    return next;
}

int Prime::getValue() const {
    return prnum;
}
