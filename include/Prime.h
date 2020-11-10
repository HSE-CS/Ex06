#ifndef Prime_H
#define Prime_H
class Prime
{
private:
	 int primeNumber;
public:
	void setValue(int number);
	bool isValid();
	bool testPrime(int number);
	int countBetween(Prime & prime);
	Prime nextPrime();
	int getValue();
	bool checkPrime(int number);
};
#endif
