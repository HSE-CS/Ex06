#include "Prime.h"

//new upload

void Prime::setValue(int value)
{
	this->prime = value;
}

bool Prime::checkPrime(int value)
{
	int flag = 1;
	if (value == 1)
		flag=0;
	else
	{
		for (int i = 2; i <= sqrt(value); i++)
		{
			if (value % i == 0)
				flag = 0;
		}
	}
	if (flag == 1)
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
	int left = min(this->prime,value.prime);
	int right = max(this->prime, value.prime);
	//cout <<endl<< left <<" "<< right << endl;
	int counter=0;
	while (left < right)
	{
		left++;
		if ((checkPrime(left) == true) && (left != right))
			//cout << left<<endl;
			counter++;
	}
	return counter;
}

int Prime::getValue()
{
	return this->prime;
}