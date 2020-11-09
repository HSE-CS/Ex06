#include "Prime.h"
#include <iostream>
#include <cstring>

void Prime::setValue(int number) {

	value = number;

}

bool Prime::isValid() {

	for (size_t i = 2; i <= sqrt(value); i++) {

		if (value % i == 0)
			return false;

	}

	return true;

}

bool Prime::checkPrime(int number) {

	for (size_t i = 2; i <= sqrt(number); i++) {

		if (number % i == 0)
			return false;

	}

	return true;

}

int Prime::countBetween(Prime& number) {

	int n = 0;

	if (number.value > value) {

		for (int i = value + 1; i < number.value; i++) {

			if (checkPrime(i))
				n++;

		}

	}
	else {

		for (int i = number.value + 1; i < value; i++) {

			if (checkPrime(i))
				n++;

		}

	}

	return n;

}

Prime Prime::nextPrime() {

	int next = value + 1;

	while (!checkPrime(next))
		next++;

	Prime next_prime;
	next_prime.setValue(next);

	return next_prime;

}

int Prime::getValue() {

	return value;

}

