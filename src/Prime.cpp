#include "../include/Prime.h"
#include <cstring>
#include <algorithm>

void Prime::setValue(int value){
	this->value = value;
}

bool Prime::isValid(){
	return checkPrime(value);
}

bool Prime::checkPrime(int value){
    for (int i = 2; i < value/2; i++){
		if (value % i == 0)
			return false;
	}
	return true;
}

int Prime::getValue() {
    return value;
}

int Prime::countBetween(Prime& val){
    int count = 0;
    for (int i = min(value, val.getValue()) + 1; i < max(value, val.getValue()); i++){
        if (checkPrime(i)){
            count++;
        }
    }
    return count;
}

Prime Prime:: nextPrime() {
    int value = this->value + 1;
    Prime number;
    while (!checkPrime(value)){
        value++;
    }
    number.setValue(value);
    return number;
} 