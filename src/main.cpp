#include <iostream>
#include "Prime.h"

int main() {
	Prime num1, num2;
	std::cout << num1.getValue() << std::endl; // 2
	num1.setValue(11);
	std::cout << num1.getValue() << std::endl; // 11
	std::cout << num1.checkPrime(10) << std::endl; // 0
	std::cout << num1.isValid() << std::endl;; // 1
	num2 = num1.nextPrime();
	std::cout << num2.getValue() << std::endl; // 13
	num1.setValue(21);
	std::cout << num1.countBetween(num2) << std::endl; // 17 and 19 = 2
	return 0;
}