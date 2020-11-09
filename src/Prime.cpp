#include "Prime.h"

void Prime::setValue(int value)
{
	this->prime = value;
}


bool Prime::checkPrime(int value)
{
	int point = 1;

	if (value == 1)
		point = 0;
	else
	{
		for (int i = 2; i <= sqrt(value); i++)
		{
			if (value % i == 0)
				point = 0;
		}
	}

	if (point == 1)
		return true;
	else
		return false;
}


bool Prime::isValid()
{
	return checkPrime(this->prime);
}


Prime Prime::nextPrime()
{
	int nextprime = this->prime + 1;

	while (checkPrime(nextprime) != true)
		nextprime++;

	Prime primenext;
	primenext.setValue(nextprime);

	return primenext;
}


int Prime::countBetween(Prime& value)
{
	int one = min(this->prime, value.prime);
	int two = max(this->prime, value.prime);
	int coun = 0;

	while (one < two)
	{
		one++;
		if ((checkPrime(one) == true) && (one != two))
			coun++;
	}

	return coun;
}


int Prime::getValue()
{
	return this->prime;
}