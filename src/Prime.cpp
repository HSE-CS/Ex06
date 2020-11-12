#include "Prime.h"


void Prime::setValue(int num) {
	num1 = num;
}


bool Prime::isValid() {
	int y = 0;
	for (unsigned int j = 2; j <= ((num1)/2); ++j) {
		if (num1 % j == 0) return false;
	}
	return true;
}


bool Prime::checkPrime(int num) {
	int y = 0;
	for (unsigned int j = 2; j <= ((num) / 2); ++j) {
		if (num % j == 0) return false;
	}
	return true;
}


int Prime::countBetween(Prime & new_num) {
	int num = 0;
	if (num1 < new_num.num1) {
		for (int i = num1 + 1; i < new_num.num1; ++i) {
			if (checkPrime(i)) 	num++;
		}
	} 
	else {
		for (int i = new_num.num1 + 1; i < num1; ++i) {
			if (checkPrime(i)) 	num++;
		}
	}
	return num;
	
}


Prime Prime::nextPrime() {
	int num = num1;
	int y = 0;
	for (int i = 1; ; ) {
		num++;
		for (int j = 2; j<num; ++j) {
			if (num % j == 0) y++;
		}
		if (y == 0) break;
	}
	Prime num2;
	num2.setValue(num);
	return num2;
}


int Prime::getValue() {
	return num1;
}