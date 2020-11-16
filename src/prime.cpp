#include "Prime.h"

void Prime::setValue(int num) {
	this->num = num;
}

bool Prime::checkPrime(int value) {
	if (value <= 1)
		return false;
	else {
		for (int i = 2; i < value; i++) {
			if (value % i == 0)
				return false;
		}
		return true;
	}
}

bool Prime::isValid() {
	return checkPrime(this->num);
}

int Prime::countBetween(Prime& primeNum) {
	int count = 0;
	int start = 0;
	int end = 0;
	if (num > primeNum.num) {
		start = primeNum.num;
		end = num;
	}
	else {
		start = num;
		end = primeNum.num;
	}
	for (int i = ++start; i < end; i++) {
		if (checkPrime(i)) {
			count++;
		}
	}
	return count;
}

Prime Prime::nextPrime() {
	Prime prime{};
	for (int i = num + 1; i <= num * num; i++) {
		if (checkPrime(i)) {
			prime.setValue(i);
			break;
		}
	}
	return prime;
}

int Prime::getValue() const {
	return this->num;
}