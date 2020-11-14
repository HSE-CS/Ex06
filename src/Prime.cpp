#include "prime.h"

void Prime::setValue(int n)
{

	num1 = n;

}
bool Prime::isValid()
{
	if (num1 == 1) return false;
	for (unsigned int i = 2; i <= ((num1) / 2); i++)
	{
		if (num1 % i == 0)
		{
			return false;
		}
	}
	return true;

}
bool Prime::checkPrime(int a)
{

	if (a == 1) return false;
	for (unsigned int i = 2; i <= ((a) / 2); i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;

}
int Prime::countBetween(Prime& b)
{
	int k = 0;
	if (num1 > b.num1)
		for (int i = b.num1 + 1; i < num1; i++)
		{

			if (checkPrime(i))
				k++;

		}
	if (num1 < b.num1)
		for (int i = num1 + 1; i < b.num1; i++)
		{

			if (checkPrime(i))
				k++;

		}
	return k;
}
Prime Prime::nextPrime()
{
	int i = num1;
	bool b = false;
	while (b == false)
	{
		i = i + 1;
		b = checkPrime(i);

	}

	Prime ch;
	ch.num1 = i;
	return ch;
}
int Prime::getValue()
{

	return num1;
}