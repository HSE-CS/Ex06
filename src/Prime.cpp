//
// Created by stoja on 10.11.2020.
//

#include "Prime.h"
#include <iostream>
#include <cmath>

void Prime::setValue(int value){
    this->value = value;
}

int Prime::getValue(){
    return this->value;
};

bool Prime::checkPrime(int n){

    if (n > 1)
    {
        // в цикле перебираем числа от 2 до n - 1
        for (int i = 2; i < n; i++)
            if (n % i == 0) // если n делится без остатка на i - возвращаем false (число не простое)
                return false;

        // если программа дошла до данного оператора, то возвращаем true (число простое) - проверка пройдена
        return true;
    }
    else // иначе возвращаем false (число не простое)
        return false;
}

bool Prime::isValid(){
    if (checkPrime(this->value)) {
        return true;
    }
    return false;
}

int Prime::countBetween(Prime& number) {
    int max,min;
    if ( number.value > value) {
        max = number.value;
        min = value;
    }
    else {
        max = value;
        min = number.value;
    }
    int count=0;
    do {
        max--;
        if ( checkPrime(max) )
            count++;

    } while ( max > min + 1 );

    return count;
}

Prime Prime::nextPrime() {
    bool isPrime = false;
    Prime num = *this;
    while (!isPrime)
        isPrime = checkPrime(++(num.value));
    return num;
}