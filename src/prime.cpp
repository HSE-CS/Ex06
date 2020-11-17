#include "Prime.h"

void Prime::setValue(int new_number) {
	number = new_number;
}
bool Prime::checkPrime(int value) const {
	int d = 2;
	while (d * d <= value) {
		if (value % d == 0) return false;
		d++;
	}
	return true;
}
bool Prime::isValid() const {
	return checkPrime(number);
}

int Prime::countBetween(Prime& value) const {
	int start = value.getValue();
	int end = number;
	int count = 0;
	if (value.getValue() > number) {
		start = number;
		end = value.getValue();
	}
	for (int i = start + 1; i < end; i++) {
		if (checkPrime(i)) count++;
	}
	return count;
}
Prime Prime::nextPrime() const {
	Prime value;
	value.setValue(number + 1);
	while (!value.isValid()) {
		value.setValue(value.getValue() + 1);
	}
	return value;
}
int Prime::getValue() const {
	return number;
}