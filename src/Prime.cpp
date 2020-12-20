#include"Prime.h"
#include<cmath>

int Prime::getValue()
{
	return value;
};

void Prime::setValue(int a)
{
	this->value = a;
};

bool Prime::isValid()            
{
	for (int i = 2; i <= value; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
};
bool Prime::checkPrime(int a)   
{
	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
};
int Prime::countBetween(Prime& pr) {
	int begin = this->value + 1;
	int end = pr.value - 1;
	int it = 0;
	for (int i = begin; i <= end; ++i) {
		if (checkPrime(i)) {
			it;
		}
	}
	return it;
};
Prime Prime::nextPrime() {
	Prime next;
	int x = value;
	do {
		x++;
	} while (!checkPrime(x));
	next.value = x;
	return next;
};
