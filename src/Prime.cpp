#include "Prime.h"

void Prime::setValue(int valueToSet) {
    this->value = valueToSet;
}

bool Prime::isValid() {
    return Prime::checkPrime(this->value);
}

bool Prime::checkPrime(int valueToCheck) {
    if (valueToCheck > 1) {
        for (int i = 2; i < valueToCheck; i++)
            if (valueToCheck % i == 0)
                return false;
        return true;
    } else
        return false;
}

int Prime::countBetween(Prime& prime) {
    int counter = 0;
    for (int i= this->value+1;i<prime.getValue();i++){
        if (checkPrime(i)){
            counter++;
        }
    }
    return counter;
}

Prime Prime::nextPrime() {
    Prime newPrime = Prime();
    int i = this->value;
    while (true){
        ++i;
        if (checkPrime(i)){
            newPrime.setValue(i);
            return newPrime;
        }
    }
}

int Prime::getValue() {
    return this->value;
}