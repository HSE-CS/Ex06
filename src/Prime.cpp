#include "Prime.h"

void Prime::setValue(int value){
    settedNumber = value;
}
bool Prime::isValid(){
    for (size_t i = 2; i<=sqrt(settedNumber); ++i){
        if (settedNumber % i == 0){
            return false;
        }
    }
    return true;
}
bool Prime::testPrime(int value){
    for (size_t i = 2; i<=sqrt(value); ++i){
        if (value % i == 0){
            return false;
        }
    }
    return true;
} 
int Prime::countBetween(Prime& value1){
    int counter = 0;
    bool check = true;
    for (size_t i = settedNumber+1; i < value1.getValue();++i ){
        if (i%2 == 0){
            continue;
        }
        else{
            for (size_t j = 2; j<=sqrt(i);++j){
                if (i%j == 0){
                    check = false;
                }
            }
            if (check){
                counter++;
            }
        }
    }
    return counter;
}
Prime Prime::nextPrime(){
    bool flag = true;
    Prime potentialNext;
    potentialNext.setValue(settedNumber+1);
    while (flag){
        for (size_t i = 2; i<=sqrt(potentialNext.getValue());++i){
            if ((potentialNext.getValue()) % i == 0){
                flag = false;
            }
        }
        if (flag){
            return potentialNext;
        }
        else{
            potentialNext.setValue(potentialNext.getValue()+1);
            flag = true;
        }
    }
    return potentialNext;
}

int Prime::getValue(){
    return settedNumber;
}