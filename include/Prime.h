#pragma once

class Prime {
private:
	int number;
public:
	void setValue(int);
	bool isValid();
	bool testPrime(int);
	int countBetween(Prime& );
	Prime nextPrime();
	int getValue();
};