#include "Prime.h"
#include <math.h>
#include "iostream"

Prime Prime::nextPrime()
{
	int resrg = this->n + 1;
	while (true)
	{
		if (checkPrime(resrg))
		{
			break;
		}
		resrg += 1;

	}
	Prime num1;
	num1.setValue(resrg);
	return num1;
}
void Prime::setValue(int value)
{
	this->n = value;
}
bool Prime::isValid()
{
	return checkPrime(this->n);
}
bool Prime::checkPrime(int value)
{
	if (value > 1)
	{
		for (int i = 2; i <= sqrt(value); i++)
			if (value % i == 0)
				return false;

		return true;
	}
	else
		return false;
}
int Prime::getValue()
{
	return this->n;
}
int Prime::countBetween(Prime& num)
{
	int value1, value0, count=0;
	if (n < num.getValue())
	{
		value1 = num.getValue();
		value0 = n+1;
	}
	else
	{
		value0 = num.getValue()+1;
		value1 = n;
	}
	std::cout << value0 <<" "<< value1;
	while (value0 < value1)
	{
		if (checkPrime(value0))
			count++;
		value0++;
	}
	return count;
}