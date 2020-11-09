#include "Prime.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Prime::setValue(int a)
{
	set_value = a;
}

bool Prime::isValid()
{
	bool check = true;
	for (unsigned int i = 2; i <= set_value / 2; i++)
	{
		if (set_value % i == 0)
			return false;
	}
	return true;
}

bool Prime::checkPrime(int value)
{
	bool check = true;
	for (unsigned int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

int Prime::countBetween(Prime & given)
{
	int count = 0;
	for (unsigned int i = min(set_value, given.getValue())+1; i < max(set_value, given.getValue()); ++i)
	{
		if (checkPrime(i))
			count++;
	}
	return count;
}

Prime Prime::nextPrime() 
{
	Prime next_num;
	next_num.setValue(getValue()+1);
	while (!checkPrime(next_num.getValue()))
		next_num.setValue(next_num.getValue()+1);
	return next_num;
}

int Prime::getValue()
{
	return set_value;
}

