#include "Prime.h"

void Prime::setValue(int a) {
	this->value = a;
}

bool Prime::isValid() {
	if (this->value == 2)
		return true;
	for (unsigned int j = 2; j < this->value; ++j) {
		if (this->value % j == 0) {
			return false;
		}
	}
	return true;
}

bool Prime::checkPrime(int value) {
	if (value == 2)
		return true;
	for (unsigned int j = 2; j < value; ++j) {
		if (value % j == 0) {
			return false;
		}
	}
	return true;
}

int Prime::countBetween(Prime& a) {
	int min = 0;
	int max = 0;
	int count = 0;
	if (a.value < this->value) {
		min = a.value + 1;
		max = this->value;
	}
	else {
		max = a.value;
		min = this->value + 1;
	}
	for (int i = min; i < max; ++i) {
		if (this->checkPrime(i))
			++count;
	}
	return count;
}

Prime Prime::nextPrime() {
	int i = this->value + 1;
	while (!this->checkPrime(i))
		++i;
	Prime a;
	a.value = i;
	return a;
}

int Prime::getValue() {
	return this->value;
}