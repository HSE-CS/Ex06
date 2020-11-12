#include "Prime.h"
#include <iostream>

void Prime::setValue(int num) {
	num1 = num;
}


bool Prime::isValid() {
	if (num1 == 1) return false;
	for (unsigned int j = 2; j <= ((num1)/2); j++) {
		if (num1 % j == 0) return false;
	}
	return true;
}


bool Prime::checkPrime(int num) {
	if (num == 1) return false;
	for (unsigned int j = 2; j <= ((num) / 2); j++) {
		if (num % j == 0) return false;
	}
	return true;
}


int Prime::countBetween(Prime & new_num) {
	int num = 0;
	if (num1 < new_num.num1) {
		for (int i = num1 + 1; i < new_num.num1; i++) {
			if (checkPrime(i)) 	num++;
		}
	} 
	else {
		for (int i = new_num.num1 + 1; i < num1; i++) {
			if (checkPrime(i)) 	num++;
		}
	}
	return num;
	
}


Prime Prime::nextPrime() {
	int i;
	for (i = num1+1; ;i++ ) {
		if (checkPrime(i)) break;
	}
	Prime num2;
	num2.setValue(i);
	return num2;
}


int Prime::getValue() {
	return num1;
}