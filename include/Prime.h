﻿#ifndef PRIME_H
#define PRIME_H

class Prime {
public:
	void setValue(int num);
	bool isValid();
	bool checkPrime(int value);
	int countBetween(Prime& pr);
	Prime nextPrime();
	int getValue() const;

private:
	int num = 2;
};
#endif PRIME_H 