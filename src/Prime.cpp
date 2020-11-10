#include <cmath>
#include "Prime.h"


void Prime::setValue(int v) {

	if ( checkPrime(v) )
		val = v;
	else
		val = 0;
}

bool Prime::isValid() const {

	if ( val < 2 )
		return false;

	unsigned int v = (unsigned int) sqrt( (double) val) + 1;

	for (auto i = 2U; i < v; i++) {
		if ( val % i == 0 )
			return false;
	}

	return true;
}

bool Prime::checkPrime(int n) const {


	if ( n < 2 )
		return false;

	unsigned int v = (unsigned int) sqrt( (double) n) + 1;

	for (auto i = 2U; i < v; i++) {
		if ( n % i == 0 )
			return false;
	}

	return true;
}

int Prime::countBetween(Prime &p) const {

	int max,min;
	if ( p.val > val) {
		max = p.val;
		min = val;
	}
	else {
		max = val;
		min = p.val;
	}

	int counter=0;
	do {
		max--;
		if ( checkPrime(max) )
			counter++;

	} while ( max > min + 1 );

	return counter;
}

Prime Prime::nextPrime() const {

	int value = val;
	do {
		value++;

	} while ( !checkPrime(value) );

	return Prime(value);
}

int Prime::getValue() const {

	return val;
}


