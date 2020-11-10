#include <iostream>
#include <math.h>
#include <algorithm>
#include "Prime.h"
using namespace std;


void Prime::setValue(int val) 
{
	value = val;
}
bool Prime::isValid() 
{
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}              
bool Prime::checkPrime(int val) 
{
	for (int i = 2; i <= sqrt(val); i++)
	{
		if (val % i == 0)
			return false;
	}
	return true;
}        
int Prime::countBetween(Prime&val)
{
	int count = 0;
	if (value<val.value)
	{
		for (int i = value + 1; i < val.value; i++) {
			if (checkPrime(i) == true)
				count++;
		}
	}
	else 
	{
		for (int i = val.value + 1; i < value; i++) {
			if (checkPrime(i) == true) 
				count++;
		}
	}
	return count;
}
Prime Prime::nextPrime()
{
	bool check=true;
	Prime num;
	num.setValue(value+1);
	while (check==true)
	{

		for (int i = 2; i <= sqrt(num.getValue()); i++)
		{
			if (num.getValue() % i == 0)
				check=false;
		}

		if (check == true)
		{
			return num;
		}
		else {
			check = true;
			num.setValue(num.getValue()+1);
		}
		 
	}
}
int Prime::getValue()
{
	return value;
}