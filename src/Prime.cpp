#include "Prime.h"

void Prime::setValue(int num){
    this->num = num;
}

bool Prime::isValid(){
    return checkPrime(num);
}

int Prime::getValue(){
    return num;
}

bool Prime::checkPrime(int num){
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            return false;
        }
    }
    return true;
};

int Prime::countBetween(Prime& pr){
    int num1 = num;
    int num2 = pr.getValue();
    if (num1 > num2){
        int t = num1;
        num1 = num2;
        num2 = t;
    }
    num1++;
    int c = 0;
    for (int i = num1; i < num2; i++){
        if (checkPrime(i)){
            c++;
        }
    }
    return c;
}

Prime Prime::nextPrime(){
    int i = this->num + 1;
    while (!checkPrime(i)){
        i++;
    }
    Prime res;
    res.setValue(i);
    return res;
}