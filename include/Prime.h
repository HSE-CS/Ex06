#pragma once
#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
 
#include <iostream>


using namespace std;

class Prime {
private:
	int primeNum;



public:
	void setValue(int);
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();

};

#endif //TASK1_TASK1_H
