#ifndef PRIME_H
#define PRIME_H


class Prime
{
private:
	int primeNumber;
public:
	void setValue(int);
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue() const;
};


#endif // !PRIME_H
