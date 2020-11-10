#include <algorithm>
#include "Prime.h"

void Prime::setValue(int num) {
    val = num;
}

bool Prime::isValid() {
    bool valid = checkPrime(val);
    return valid;
}

bool Prime::checkPrime(int num) {
    if (num <= 1)
        return false;

    for (unsigned int i = 2; i <= (int)(sqrt(num)); i++){
        if (num % i == 0)
            return false;
    }

    return true;
}

int Prime::countBetween(Prime &last) {
    int count = 0;
    Prime min, max;

    min.setValue(std::min(val, last.getValue()));
    max.setValue(std::max(val, last.getValue()));

    for (auto i = min.getValue() + 1; i < max.getValue(); i++) {
        if (checkPrime(i)) {
            count++;
        }
    }

    return count;
}

Prime Prime::nextPrime() {
    Prime next_val;
    int next = val + 1;
    while (!checkPrime(next))
        next++;

    next_val.setValue(next);
    return next_val;
}

int Prime::getValue() {
    return val;
}
