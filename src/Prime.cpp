#include "Prime.h"


void Prime::setValue(int num) {
	num1 = num;
}


bool Prime::isValid() {
	int y = 0;
	for (int j = 2; j < (num1); ++j) {
		if (num1 % j == 0) y++;
	}
	if (y == 0) return true;
	else return false;
}


bool Prime::checkPrime(int num) {
	int y = 0;
	for (int j = 2; j < num; ++j) {
		if (num % j == 0) y++;
	}
	if (y == 0) return true;
	else return false;
}


int Prime::countBetween(Prime & new_num) {
	int num = num1;
	int y = 0;
	for (int i = num1; i < new_num.num1; ++i) {
		num++;
		for (int j = 2; j < num; ++j) {
			if (num % j == 0) y++;
		}
		if (y == 0) break;
	}

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