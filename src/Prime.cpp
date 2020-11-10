#include "Prime.h"

void Prime::setValue(int value)
{
	this->number = value;
}

bool Prime::isValid()
{
	return checkPrime(this->number);
}

bool Prime::checkPrime(int value)
{
	if (value <= 1)
		return false;
	for (int i = 2; i < value; i++)
		if (value % i == 0)
			return false;
	return true;
}

int Prime::countBetween(Prime& n)
{
	int count = 0;
	int num1, num2 = 0;
	if (number > n.getValue())
	{
		num1 = n.getValue() + 1;
		num2 = number;
	}
	else
	{
		num1 = number + 1;
		num2 = n.getValue();
	}
	while (num1 != num2)
	{
		if (checkPrime(num1))
			count += 1;
		num1 += 1;
	}
	return count;
}

Prime Prime::nextPrime()
{
	int num = number + 1;
	while (!checkPrime(num))
	{
		num += 1;
	}
	Prime prime_number;
	prime_number.setValue(num);
	return prime_number;
}

int Prime::getValue()
{
	return this->number;
}