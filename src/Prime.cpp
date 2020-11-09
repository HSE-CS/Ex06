#include "Prime.h"
#include <math.h>

void Prime::setValue(int v){
    this->inner = v;
}

bool Prime::isValid(){
    return Prime::checkPrime(this->inner);
}

bool Prime::checkPrime(int value){
    if (value == 1) return false;
    else if (value == 2) return true;
    else if (value % 2 == 0) return false;
    bool prime = true;
    for (int i = 3; i <= (unsigned int)ceil(sqrt(value)); i += 2){
        if (value % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

int Prime::countBetween(Prime &p){
    int n = 0;
    Prime currentPrime;
    int target;
    if (p.getValue() > this->getValue()){
        currentPrime = *this;
        target = p.getValue();
    } else {
        currentPrime = p;
        target = this->getValue();
    }
    while (currentPrime.getValue() < target){
        currentPrime = currentPrime.nextPrime();
        n += 1;
    }
    if (n > 0) return n-1;
    else return 0;
}

Prime Prime::nextPrime(){
    int value = this->inner;
    if (value == 2) {
        value = 3;
    } else {
        bool prime = false;
        while (!prime){
            value += 2;
            prime = Prime::checkPrime(value);
        }
    }
    Prime new_prime;
    new_prime.setValue(value);
    return new_prime;
}

int Prime::getValue(){
    return this->inner;
}