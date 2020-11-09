#include "Prime.h"

void Prime::setValue(int x) {
	num = x;
}

bool Prime::isValid() {
	for (int i = 2; i * i <= num; i++) {
		if (!(num % i)) {
			return false;
		}
	}
	return true;
}

bool Prime::checkPrime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (!(x % i)) {
			return false;
		}
	}
	return true;
}

int Prime::countBetween(Prime& x) {
	int num_now{ num + 1 }, count{ 0 };
	while (num_now < x.num) {
		if (checkPrime(num_now)) {
			count++;
		}
		num_now++;
	}
	return count;
}

Prime Prime::nextPrime() {
	Prime pr;
	int x = num;
	do {
		x++;
	} while (!checkPrime(x));
	pr.num = x;
	return pr;
}

int Prime::getValue() {
	return num;
}
