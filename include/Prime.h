#ifndef PRIME_H
#define PRIME_H
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>;
#include <iostream>;

class Prime
{
private:
	int num;
public:
	void setValue(int);
	bool isValid();
	bool testPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
};
#endif

