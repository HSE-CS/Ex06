//
// Created by islam on 10.11.2020.
//

#include "Prime.h"
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void Prime::setValue(int v) {
    this->num = v;
}

bool Prime::checkPrime(int v) {
    for (int i = 2; i <= int (sqrt(v)); i++) {
        if (v % i == 0 && v != 2)
            return false;
    }
    return true;
}

bool Prime::isValid() {
    return checkPrime(this->num);
}

int Prime::getValue() {
    return this->num;
}

int Prime::countBetween(Prime &pr) {
    int c = 0;
    Prime buf_m, buf_max;
    buf_m.num = min(pr.num, this->num);
    buf_max.num = max(pr.num, this->num);
    while(buf_m.num < buf_max.num){
        buf_m = buf_m.nextPrime();
        c++;
    }
    c -= 1;
    return c;

}
Prime Prime::nextPrime() {
    Prime next;
    int n_num = this->num+1;
    while(checkPrime(n_num) != 1)
        n_num++;
    next.setValue(n_num);
    return next;
}