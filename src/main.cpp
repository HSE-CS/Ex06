#include <iostream>
#include "Prime.h"


int main () {

	Prime n1, n2;

	n1.setValue(13);
	if ( n1.isValid() ) {

		n2 = n1.nextPrime();
		std::cout << n2.getValue();

		auto res = n1.countBetween(n2);
		std::cout << (n1.checkPrime(res) ? "Prime" : "Not prime");
	}

	return 0;
}
