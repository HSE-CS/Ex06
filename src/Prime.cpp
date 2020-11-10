#include "Prime.h"
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void Prime::setValue(int value) {
	this->value = value;
}

bool Prime::isValid() {
	return checkPrime(this->value);
}

int Prime::getValue() {
	return this->value;
}

bool Prime::checkPrime(int value) {
	if (value < 2) {
		return false;
	}
	for (int i = 2; i <= value / 2; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

Prime Prime::nextPrime() {
	int result = this->value + 1;
	while (!checkPrime(result)) {
		result++;
	}

	Prime answer;
	answer.setValue(result);

	return answer;
}

int Prime::countBetween(Prime& prime) {
	int first = min(this->value, prime.value);
	int second = max(this->value, prime.value);
	int counter = 0;

	for (int i = first + 1; i < second; i++) {
		if (checkPrime(i)) counter++;
	}

	return counter;
}