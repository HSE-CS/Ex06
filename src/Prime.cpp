#include"Prime.h"

void Prime::setValue(int val) {
	this->number = val;
}
bool Prime::isValid() {
	for (int i = 2; i < this->number; ++i){
		if (this->number % i == 0) {
			return false;
		}
	}
	return true;
}
bool Prime::checkPrime(int val) {
	for (int i = 2; i < val; ++i) {
		if (val % i == 0) {
			return false;
		}
	}
	return true;
}
int Prime::countBetween(Prime& simple) {
	int count{ 0 };

	for (int i = ((simple.number > this->number) ? this->number + 1 : simple.number + 1), max = ((simple.number > this->number) ? simple.number : this->number); i < max; ++i){
		if (checkPrime(i)) {
			count++;
		}
	}
	return count;
}
Prime Prime::nextPrime() {
	Prime simple;
	int i = 2;
	
	while (1) {
		if (checkPrime(i) && (i > this->number)) {
			simple.setValue(i);
			return simple;
		}
		i++;
	}
}
int Prime::getValue() {
	return this->number;
}