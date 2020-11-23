#include "Prime.h"


void Prime::setValue(int value)
{
	primeNumber = value;
}

int Prime::getValue() const
{
	return primeNumber;
}

bool Prime::checkPrime(int number)
{
	if (number == 1 || number == 0)
		return false;

	for (int i = number - 1; i > 1; i--)
		if (number % i == 0)
			return false;

	return true;
}

bool Prime::isValid()
{
	return checkPrime(primeNumber);
}

Prime Prime::nextPrime()
{
	int number = primeNumber + 1;
	while (!checkPrime(number++));

	Prime* nextPrime = new Prime;
	nextPrime->setValue(number - 1);

	return *nextPrime;
}

int Prime::countBetween(Prime& nextPrime)
{
	int counter = 0;
	Prime firstPrime, secondPrime;

	if (primeNumber < nextPrime.getValue())
	{
		firstPrime.setValue(primeNumber);
		secondPrime.setValue(nextPrime.getValue());
	}
	else
	{
		firstPrime.setValue(nextPrime.getValue());
		secondPrime.setValue(primeNumber);
	}

	firstPrime = firstPrime.nextPrime();

	while (firstPrime.getValue() != secondPrime.getValue())
	{
		firstPrime = firstPrime.nextPrime();
		counter++;
	}

	return counter;
}