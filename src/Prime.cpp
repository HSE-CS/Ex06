#include "Prime.h"
#include <iostream>

using namespace std;


void Prime::setValue(int newPrime) 
{
	prime = newPrime;
}

int Prime::getValue()
{
	return prime;
}

bool Prime::checkPrime(int numForCheck)
{
	if (numForCheck < 2) {
		return false;
	}
	else if (numForCheck == 2) {
		return true;
	}

	bool aPrime = true;
	unsigned int i = 0, passed = 1, current = 3, index = 0;
	unsigned int *primeNumbers = new unsigned int[numForCheck];

	primeNumbers[i++] = 2;

	while (primeNumbers[i - 1] != numForCheck) {
		index = 0;
		passed = 1;
		while (index < i && passed) {
			if (current % primeNumbers[index++] == 0) {
				passed = 0;
				if (current == numForCheck) {
					delete[] primeNumbers;
					return !aPrime;
				}
			}
		}
		if (passed) {
			primeNumbers[i++] = current;
		}
		current++;
	}

	delete[] primeNumbers;

	return aPrime;
}

bool Prime::isValid()
{
	Prime newP;
	return newP.checkPrime(prime);
}

int Prime::countBetween(Prime& other)
{
	int newP, counter = 0, lastValue;
	Prime next;

	if (other.getValue() < prime) {
		newP = other.getValue() + 1;
		lastValue = prime;
	}
	else {
		newP = prime + 1;
		lastValue = other.getValue();
	}

	while (newP < lastValue) {
		while (!next.checkPrime(newP)) {
			newP++;
		}
		if (newP >= lastValue) {
			break;
		}
		counter++;
		newP += 2;
	}
	
	return counter;
}

Prime Prime::nextPrime()
{
	unsigned int newP = prime + 1;
	Prime next;
	while ( !next.checkPrime(newP)) {
		newP++;
	}
	next.setValue(newP);
	return next;
}