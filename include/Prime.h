#ifndef PRIME_H
#define PRIME_H

class Prime
{
private:
	int val=2;
public:
	void setValue(int numb);
	bool isValid();
	bool checkPrime(int value);
	int countBetween(Prime& next_prime);
	Prime nextPrime();
	int getValue();
};

#endif 
