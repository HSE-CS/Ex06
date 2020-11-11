#include "Prime.h"
#include <algorithm>

using namespace std;

void Prime::setValue(int a) {
	value = a;
	isPrime = checkPrime(a);
}
bool Prime::isValid() {
	return isPrime;
}
bool Prime::checkPrime(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) return false;
	}
	return true;
}
int Prime::countBetween(Prime& p) {
	int count = 0;
	for (int i = min(value, p.value) + 1; i < max(value, p.value); i++) {
		if (checkPrime(i)) count++;
	}
	return count;
}
Prime Prime::nextPrime() {
	int i;
	for (i = value + 1; 1; i++) {
		if (checkPrime(i)) break;
	}
	Prime p;
	p.value = i;
	p.isPrime = true;
	return p;
}
int Prime::getValue() {
	return value;
}