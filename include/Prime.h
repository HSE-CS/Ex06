#ifndef prime_h
#define prime_h

typedef unsigned int count_t;

class Prime
{
private:
	int num;

public:
	void setValue(int num);
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
};
#endif