#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Prime{
private:
	int value;
public:
	void setValue(int);          
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
}; 

#endif