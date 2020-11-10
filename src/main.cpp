#include <iostream>
#include "Prime.h"

int main(){
	Prime test;
	test.setValue(0);
	std::cout << test.isValid() << test.checkPrime(10);
	Prime tmp = test.nextPrime();
	std::cout << tmp.countBetween(test);
	return 0;
}
