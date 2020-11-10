#include "Prime.h"
#include "math.h"

void Prime::setValue(int num){
    value = num;
}

bool Prime::isValid(){
    return checkPrime(value);
}

bool Prime::checkPrime(int val){
    if(val == 2)
        return true;
    if (val%2 == 0) //even numbers >2 aren't prime
        return false;
    for (int i=2;i<=sqrt(val);i++) //sqrt is enough
        if (val % i == 0)
            return false;
    return true;
}

int Prime::countBetween(Prime& second){
    int num1 = value, num2 = second.getValue();
    if (num1 > num2){ //num1 is always less then num2
        int tmp;
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    int counter = 0;
    for (int i=num1+1;i<num2;i++){
        if (checkPrime(i)){
            counter++;
        }
    }
    return counter;
}

Prime Prime::nextPrime() {
    Prime new_num;
    int new_value = value;
    if (new_value == 2){
        new_value = 3;
        new_num.setValue(new_value);
        return new_num;
    }
    while(true) {
        new_value += 2;
        if (checkPrime(new_value)) {
            new_num.setValue(new_value);
            return new_num;
        }
    }
}

int Prime::getValue(){
    return value;
}