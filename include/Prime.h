#ifndef PRIME_H
#define PRIME_H

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef int prime_t;//создаём псевдоним, что prime_t это int
class Prime
{
private://значение для работы в private
	prime_t prime;
public://функции
	Prime nextPrime();
	void setValue(int);
	bool checkPrime(int);
	bool isValid();
	int countBetween(Prime&);
	int getValue();
};

#endif