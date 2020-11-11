#ifndef PRIME_H
#define PRIME_H



class Prime
{

private:
	int number;
public:

	void setValue(int n);
	bool isValid();
	bool checkPrime(int n);
	int countBetween( Prime& n);
	Prime nextPrime();
	int getValue();

};

#endif PRIME_H
