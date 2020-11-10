#include "Prime.h"
#include <math.h>

void Prime::setValue(int num){
	this->num = num;
}

bool Prime:: isValid() {
	for (unsigned int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

bool Prime::checkPrime(int num2) {

	for (unsigned int i = 2; i <= sqrt(num2); i++) {
		if (num2 % i == 0) {
			return false;
		}
	}
	return true;
}

int Prime::countBetween(Prime& num2) {
	int count = 0;
	for (int i = this->num +1; i < num2.getValue(); i++) {
		Prime q;
		q.setValue(i);
		count += (q.isValid()?1:0);
		
		/*for (int i=0;)
		if (num % i == 0) {
			count++;
		}*/

	}
	return count;
}

Prime Prime::nextPrime() {
	Prime q;
	int i= num+1;
	for (;1;i++) {
		q.setValue(i);
		if (q.isValid()) {
			break;
		}
	}
	return q;
}

int Prime::getValue() {
	return num;
}







