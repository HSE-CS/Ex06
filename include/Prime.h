#pragma once
#define PRIME_H
#ifdef PRIME_H
#include<cmath>
class Prime
{
public:
	void setValue(int);
	bool isValid();  
    bool checkPrime(int);  
	int countBetween(Prime&);  
	Prime nextPrime(); 
	int getValue();
private:
	unsigned int prime;
};

 
#endif // PRIME_H

