#pragma once

class Prime 
{
public:
	int PrimeNum;
	void setValue(int a);
	bool isValid();
	bool checkPrime(int a);
	int countBetween(Prime& num);

	Prime nextPrime();

	int getValue();
};