//
// Created by Алексей Трутнев on 09.11.2020.
//

#include "Prime.h"
#include <iostream>
#include <algorithm>

void Prime::setValue(int n){
    value = n;
    prime = checkPrime(n);
}

bool Prime::isValid(){
    return prime;
}

bool Prime::checkPrime(int a){
    if (a < 2)
        return false;
    for (int i = 2; true; ++i){
        int q = a / i;
        if (q < i)
            return true;
        if (a == q * i)
            return false;
    }
}

int Prime::countBetween(Prime& temp){
    size_t count = 0;
    for (size_t i = std::min(value, temp.value); i < std::max(value, temp.value); ++i)
        if(checkPrime(i)) count++;
    return count;
}

Prime Prime::nextPrime(){
    size_t n_prime = value + 1;
    while(!checkPrime(n_prime))
        n_prime++;
    Prime temp;
    temp.setValue(n_prime);
    return temp;
}

int Prime::getValue(){
    return value;
}
