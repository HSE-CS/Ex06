#include <iostream>
#include <algorithm>
#include "Prime.h"

using namespace std;

void Prime::setValue(int value) 
{
	this->val = value;
}
bool Prime::isValid()
{
	return checkPrime(val);
}
bool Prime::checkPrime(int val)
{
	for (int i = 2; i <= val / 2; i++)
	{
		if ((val % i) == 0)
			return false;
	}
	return true;
}
int Prime::countBetween(Prime& prime)
{
	int count = 0;
	for (int i = min(prime.val, val) + 1; i < max(prime.val, val); i++)
	{
		if (checkPrime(i))
			count++;
	}
	return count;
}
Prime Prime::nextPrime()
{
	int i = this->val + 1;
	while (!checkPrime(i)) 
		i++;
	Prime res;
	res.setValue(i);
	return res;
}
int Prime::getValue()
{
	return this->val;
}