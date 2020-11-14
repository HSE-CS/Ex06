

#include<iostream>
#include<cmath>
#include"Prime.h"




	
	void Prime::setValue(int a) {
		PrimeNum = a;
	}
	bool Prime::isValid() {
		for (int i = 2; i < sqrt(PrimeNum) + 1; i++) {
			if (PrimeNum%i == 0)
				return false;
		}
		return true;
	}
	bool Prime::checkPrime(int a) {
		for (int i = 2; i < sqrt(a) + 1; i++) {
			if (a%i == 0)
				return false;
		}
		return true;
	}
	int Prime::countBetween(Prime& num) {
		int h1, h2, col = 0;
		if (PrimeNum < num.getValue()) {
			h1 = PrimeNum;
			h2 = num.getValue();
		}
		else {
			h2 = PrimeNum;
			h1 = num.getValue();
		}
		for (int i = h1 + 1; i < h2; i++) {
			if (checkPrime(i))
				col++;
		}
		return col;
	}
	Prime Prime::nextPrime() {
		Prime result;
		int num = PrimeNum+1;
		while (true) {
			if (checkPrime(num)) {
				result.setValue(num);
				return result;
			}
				
			
		}
	}
	int Prime::getValue() {
		return PrimeNum;
	}
