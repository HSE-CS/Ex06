#include "../include/Prime.h"

void Prime::setValue(int v) {
    val = v;
}

bool Prime::isValid() {
    return checkPrime(val);
}

bool Prime::checkPrime(int v) {
    int dels = 0;
    for(int i = 2; i < v; ++i) {
        if (v % i == 0)
            dels++;
    }
    return (dels) ? false : true;
}

int Prime::countBetween(Prime& pNum) {
    int c = 0;
    for (int i = val + 1; i < pNum.getValue(); ++i) {
        if(checkPrime(i))
            c++;
    }
    return c;
}

Prime Prime::nextPrime() {
    Prime newPrime;
    newPrime.setValue(val + 1);
    while(!checkPrime(newPrime.getValue())) 
        newPrime.setValue(newPrime.getValue() + 1);

    return newPrime;
}

int Prime::getValue() {
    return val;
} 