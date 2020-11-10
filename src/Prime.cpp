#include "Prime.h"
#include <iostream>
#include <math.h>

void Prime::setValue(int numb)
{
	val = numb;
}

bool Prime::isValid()
{
	return Prime::checkPrime(val);
}

bool Prime::checkPrime(int value)
{
	if (value == 2 || value == 3 || value == 5)
		return true;
	if (value % 2 == 0)
		return false;
	unsigned int n = sqrt(value);
	for (unsigned int i = 3; i <= n; i += 2)
		if (value % i == 0)
			return false;
	return true;
}

int Prime::countBetween(Prime& next_prime)
{
	int cnt = -1;
	for (int i = val; i < next_prime.val; i += 2)
		if (Prime::checkPrime(i) == true)
			cnt++;
	return cnt;
}

Prime Prime::nextPrime()
{
	Prime result;
	if (val == 2)
	{
		result.setValue(3);
		return result;
	}
	unsigned long long next_value = val;
	while (true)
	{
		next_value += 2;
		if (Prime::checkPrime(next_value))
		{
			result.setValue(next_value);
			return result;
		}
	}
}

int Prime::getValue()
{
	return val;
}
