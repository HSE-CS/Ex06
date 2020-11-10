#include <iostream>
#include <algorithm>
#include "Prime.h"

using namespace std;

void Prime::setValue(int n) {
	number = n;
	prime = checkPrime(number);
}
bool Prime::isValid() {
	return prime;
}

bool Prime::checkPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int Prime::countBetween(Prime& a) {
	int count = 0;
	for (int i = min(number, a.number)+1; i < max(number, a.number); ++i)
		if (checkPrime(i)) count++;
	return count;
}

Prime Prime::nextPrime() {
	int nextprime = number + 1;
	while (!checkPrime(nextprime)) {
		nextprime++;
	}
	Prime a{};
	a.setValue(nextprime);
	return a;
}

int Prime::getValue() {
	return number;
}