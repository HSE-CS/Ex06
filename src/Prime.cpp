#include "Prime.h"
#include <iostream>
void Prime::setValue(int number)
{
	primeNumber = number;
}

bool Prime::testPrime(int number)
{
	for(int i = 2; i < number/2 + 1; i++)
	{
		if(number % i == 0)
			return false;
	}
	return true;
}
bool Prime::isValid()
{
	return testPrime(primeNumber);
}
Prime Prime::nextPrime()
{
	int i = primeNumber +1;
	while(!testPrime(i))
	{
		i++;
	}
	Prime prime;
	prime.setValue(i);
	return prime;
	
}
int Prime :: getValue()
{
	return primeNumber;
}
int Prime::countBetween(Prime & prime)
{
	int num = 0;
	int max = 0;
	int i = 0;
	int value = prime.getValue();
	if(value > primeNumber)
	{
		num = primeNumber + 1;
		max = value;
	}
	else
	{
		num = value + 1;
		max = primeNumber;
	}
	for(; num < max; num++)
	{
		if(testPrime(num))
		{
			i++;
		}
	}
	std :: cout << "F" << std :: endl;
	return i;
	
}
bool Prime::checkPrime(int number)
{
	return testPrime(number);
}

