#include <math.h>
#include "Prime.h"

void Prime::setValue(int value)
{
	this-> value = value;
}
bool Prime::isValid() 
{
	for (unsigned int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}
bool Prime::checkPrime(int value2)
{
	for (unsigned int i = 2; i <= sqrt(value2); i++) 
	{
		if (value2 % i == 0)
			return false;
	}
	return true;
}
int Prime::countBetween(Prime& value2)
{
	int count = 0;
	for (int i = this->value + 1; i < value2.getValue(); i++) {
		Prime t;
		t.setValue(i);
		count += (t.isValid() ? 1 : 0);
	}
	return count;
}
Prime Prime::nextPrime()
{
	Prime t;
	int i = value + 1;
	for (; 1; i++) {
		t.setValue(i);
		if (t.isValid()) 
			break;
	}
	return t;
}
int Prime::getValue()
{
	return value;
}