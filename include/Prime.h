#pragma once
#include <iostream>

class Prime
{
private: int val;
public:
	void setValue(int val);
	bool isValid();
	bool checkPrime(int val);
	int countBetween(Prime& prime);
	Prime nextPrime();
	int getValue();
};