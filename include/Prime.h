#ifndef _PRIME_H
#define _PRIME_H_

class Prime
{
private:
	int set_value;
public:
	void setValue(int);
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
};

#endif