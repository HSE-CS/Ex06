#include <iostream>
#include "Prime.h"

using namespace std;

void Prime::setValue(int val) {
    value = val;
}

bool Prime::checkPrime(int val) {
    for (int i = 2; i < val; i++)
        if (val % i == 0) return false;
    return true;
}

bool Prime::isValid() {
    return checkPrime(value);
}

int Prime::getValue() {
    return value;
}

Prime Prime::nextPrime() {
    int possibleValue = value + 1;
    while(!(checkPrime(possibleValue))) possibleValue++;
    Prime result;
    result.setValue(possibleValue);
    return result;
}

int Prime::countBetween(Prime &val) {
    int start = 0;
    int end = 0;
    int prime_cnt = 0;
    if (val.getValue() < value){
        start = val.getValue();
        end = value;
    } else {
        end = val.getValue();
        start = value;
    }
    for (int i = start + 1; i < end; i++){
        if (checkPrime(i)) prime_cnt++;
    }
    return prime_cnt;
}
