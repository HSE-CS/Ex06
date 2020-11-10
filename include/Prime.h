#ifndef PRIME_H
#define PRIME_H

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

//new upload

typedef int prime_t;//������ ���������, ��� prime_t ��� int
class Prime
{
private://�������� ��� ������ � private
	prime_t prime;
public://�������
	Prime nextPrime();
	void setValue(int);
	bool checkPrime(int);
	bool isValid();
	int countBetween(Prime&);
	int getValue();
};

#endif