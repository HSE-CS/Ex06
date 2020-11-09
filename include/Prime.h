#ifndef _PRIME_H
#define _PRIME_H_
#include <iostream>

class Prime
{
private:
	unsigned num1;
public:
	void setValue(int input);
	bool isValid();
	bool testPrime(int input);
	int countBetween(Prime& num2); 
	Prime nextPrime();
	int getValue();

};
#endif