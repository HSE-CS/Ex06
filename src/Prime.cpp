#include "Prime.h"
#include <cmath>
#include <iostream>
void Prime::setValue(int value)
{
	this->num = value;
}

bool Prime::isValid()
{
	return checkPrime(this->num);
}

bool Prime::checkPrime(int value)
{
	int easyNum = 0;
	for (int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

int Prime::countBetween(Prime &prime)
{
	int a = prime.num, b =  this -> num;
	if (prime.num > this->num)
	{
		a = this->num;
		b = prime.num;
	}
	int counter = 0;
	Prime next;
	next.setValue(a + 1);
	while (next.getValue() < b) {
		next = next.nextPrime();
		counter++;
		std::cout << next.getValue() << ' ';
	}
	return counter - 1;

}

Prime Prime::nextPrime()
{
	Prime nprime;
	int next = this->num + 1;
	while (!checkPrime(next))
	{
		next++;
	}
	nprime.setValue(next);
	return nprime;
}

int Prime::getValue()
{
	return this->num;
}
