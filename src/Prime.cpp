#include"Prime.h"



void Prime::setValue(int n)
{

	number = n;

}




bool Prime::isValid()
{
	bool prime = true;
	if (number == 1) return false;
	for (unsigned int i = 2; i <= ((number) / 2); i++)
	{
		if (number % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;

}




bool Prime::checkPrime(int n)
{
	bool prime = true;
	if (n == 1) return false;
	for (unsigned int i = 2; i <= ((n) / 2); i++)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;


}




int Prime::countBetween( Prime& n)
{
	int k = 0;
	if (n.number > number)
	{

		for (int i = number + 1; i < n.number; i++)
			if (checkPrime(i)) k++;

	}
	else
	{

		for (int j = n.number + 1; j < number; j++)
			if (checkPrime(j)) k++;

	}

	return k;

}




Prime Prime::nextPrime()
{
	int i;
	for (i = number + 1; ; i++)
		if (checkPrime(i)) break;
	Prime n;
	n.number = i;
	return n;


}





int Prime::getValue()
{

	return number;

}

