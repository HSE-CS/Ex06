#include <cmath>
#include <iostream>
#include <Prime.h>

void Prime::setValue(int num) {
    this->value = num;
}

bool Prime::checkPrime(int num) {
    for (unsigned int i = 2; i < sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

bool Prime::isValid() {
    return checkPrime(this->value);
}

/*
int Prime::countBetween(Prime &num) {
    int a = fmin(this->value, num.value) + 1;
    int b = fmax(this->value, num.value);


    int count = 0;
    while (a < b){
        if (checkPrime(a) == true)
            count++;
        a++;
    }
    return count;
}
*/

Prime Prime::nextPrime() {
    Prime next_p;
    int next = this->value + 1;
    while(!checkPrime(next)){
        next++;
    }
    next_p.setValue(next);
    return next_p;
}

int Prime::getValue() {
    return this->value;
}

int Prime::countBetween(Prime &prime) {
    int a = prime.value < this->value ? prime.value : this->value;
    int b = prime.value > this->value ? prime.value : this->value;

    int count = 0;
    while (a < b){
        if (checkPrime(a) == true)
            count++;
        a++;
    }
    return count;
}
