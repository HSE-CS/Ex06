#include "Prime.h"
#include <iostream>

void Prime::setValue(int val)
{
	this->val = val;
}

bool Prime::isValid()
{
	return checkPrime(val);
}

bool Prime::checkPrime(int val)
{
	for (size_t i = 2; i < val; i++)
		if (val % i == 0)
			return false;
	return true;
}

int Prime::countBetween(Prime& v)
{
	size_t count = 0;
	for (int i = getValue() + 1; i < v.getValue(); i++)
		if (checkPrime(i) == true)
			count++;
	return count;
}

Prime Prime::nextPrime()
{
	Prime res;
	int i = getValue() + 1;
	for (i; checkPrime(i) == false; i++)
		;
	res.setValue(i);
	return res;
}

int Prime::getValue()
{
	return val;
}