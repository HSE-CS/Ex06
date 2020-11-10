#include "Prime.h"

void Prime::setValue(int a)
{
	num = a;
};

bool Prime::isValid()
{
	for (int j = 2; j < num; j++)
	{
		if (num % j == 0)
			return 0;
	}
	return 1;
};

bool Prime::checkPrime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
};

int Prime::countBetween(Prime& a)
{
	int count = 0;
	if (this->num < a.num)
	{
		for (int i = this->num + 1; i < a.num; i++)
		{
			if (i == 1)
				count++;
			else if (i == 2)
				count++;
			else
			{
				bool isPrime = true;
				for (int j = 2; j < i; j++)
				{
					if (i % j == 0)
					{
						isPrime = false;
						break;
					}
				}
				if (isPrime)
					count++;
			}
		}
	}
	else
	{
		for (int i = a.num + 1; i < this->num; i++)
		{
			if (i == 1)
				count++;
			else if (i == 2)
				count++;
			else
			{
				bool isPrime = true;
				for (int j = 2; j < i; j++)
				{
					if (i % j == 0)
					{
						isPrime = false;
						break;
					}
				}
				if (isPrime)
					count++;
			}
		}
	}
	return count;
};

Prime Prime::nextPrime()
{
	bool isPrime = false;
	Prime number = *this;
	while (!isPrime)
		isPrime = checkPrime(++(number.num));
	return number;
};

int Prime::getValue()
{
	return num;
};