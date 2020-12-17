#include "Prime.h"
#include "math.h"

void Prime::setValue(int n){
    value = n;
}

bool Prime::isValid(){
    return checkPrime(value);
}

bool Prime::checkPrime(int val){
    if(val == 2)
        return true;
    if (val%2 == 0)
        return false;
    for (int i=2;i<=sqrt(val);i++) 
        if (val % i == 0)
            return false;
    return true;
}

int Prime::countBetween(Prime& second){
    int n1 = value, n2 = second.getValue();
    if (n1 > n2){ 
        int tmp;
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    int counter = 0;
    for (int i=n1+1;i<n2;i++){
        if (checkPrime(i)){
            counter++;
        }
    }
    return counter;
}

Prime Prime::nextPrime() {
    Prime new_n;
    int new_value = value;
    if (new_value == 2){
        new_value = 3;
        new_n.setValue(new_value);
        return new_n;
    }
    while(true) {
        new_value += 2;
        if (checkPrime(new_value)) {
            new_n.setValue(new_value);
            return new_n;
        }
    }
}

int Prime::getValue(){
    return value;
}