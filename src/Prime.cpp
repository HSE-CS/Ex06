#include "Prime.h"

void Prime::setValue(int num) {
    primeNum = num;
}
bool Prime::isValid() {
    return checkPrime(primeNum);
}

bool Prime::checkPrime(int num) {
    if (num == 1) {
        return false;
    }
    if (num % 2 == 0) {
        return num == 2;
    }
    int div = 3;
    while (((div * div) <= num) && ((num % div) != 0)) {
        div += 2;
    }
    return div * div > num;
}
int Prime::getValue() {
    return primeNum;
}

int Prime::countBetween(Prime& anotherPrime) {
    int primeNum2 = anotherPrime.getValue();
    int i, j, counter{0};
    if (primeNum < primeNum2) {
        i = primeNum;
        j = primeNum2;
    }
    else {
        j = primeNum;
        i = primeNum2;
    }
    i++;
    for (i ; i < j ; i++) {
        if (checkPrime(i)) {
           // std::cout << i << endl;
            counter++;
        }
    }
    return counter;
}
Prime Prime:: nextPrime() {
    int value = primeNum;
    while (true) {
        value++;
        if (checkPrime(value)) {
            Prime num;
            num.setValue(value);
            return num;
        }
    }
}