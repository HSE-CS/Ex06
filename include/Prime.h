#ifndef PRIME_H
#define PRIME_H

class Prime
{
private:
	int num = 0;
public:
	void setValue(int);
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
};

#endif