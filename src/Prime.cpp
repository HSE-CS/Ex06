#include"Prime.h"

void Prime::setValue(int val) {
	this->number = val;
}
bool Prime::isValid() {
	for (size_t i = 2; i < this->number; ++i){
		if (this->number % i == 0) {
			return false;
		}
	}
	return true;
}
bool Prime::testPrime(int val) {
	for (size_t i = 2; i < val; ++i) {
		if (val % i == 0) {
			return false;
		}
	}
	return true;
}
int Prime::countBetween(Prime& simple) {
	int count{ 0 };

	for (size_t i = (simple.number > this->number) ? this->number : simple.number + 1, max = (simple.number > this->number) ? simple.number : this->number; i < max; ++i){
		if (testPrime(i)) {
			count++;
		}
	}
	return count;
}
Prime Prime::nextPrime() {
	Prime simple;
	int i = 2;
	
	while (1) {
		if (testPrime(i) && (i > this->number)) {
			simple.setValue(i);
			return simple;
		}
		i++;
	}
}
int Prime::getValue() {
	return this->number;
}