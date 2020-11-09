#include "Prime.h"

void Prime::setValue(int val)
{
	this->value = val;
}

bool Prime::isValid()
{
	return checkPrime(this->value);
}

bool Prime::checkPrime(int val)
{
	bool isprime = true;
	for (size_t i = 2; i < (val/2)+1; i++)
	{
		if (val % i == 0) {
			isprime = false;
			break;
		}
	}
	return isprime;
}

int Prime::countBetween(Prime& num)
{
	unsigned count{ 0 };
	for (size_t i = this->value+1; i < num.value; i++)
	{
		if (checkPrime(i))
			count++;
	}
	return count;
}

Prime Prime::nextPrime()
{
	Prime num;
	num.setValue(this->value + 1);
	while (1) {
		if (checkPrime(num.value))
			break;
		else
			num.setValue(num.value + 1);
	}
	return num;
}

int Prime::getValue()
{
	return this->value;
}
