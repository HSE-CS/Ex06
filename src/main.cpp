#include<iostream>
#include "Prime.h"

int main() {
	Prime p;		
	p.setValue(3);
	std::cout << "Create and set value: " << p.getValue() << " " << p.isValid() << '\n';

	p.setValue(4);		
	bool result1 = p.isValid();
	std::cout << "Change value: " << p.getValue() << " " << p.isValid() << '\n';

	Prime num1, num2;		
	num1.setValue(2);
	num2.setValue(11);
	std::cout << "The number of primes between 2 and 11: " << num1.countBetween(num2) << "\n";

	Prime num3 = num2.nextPrime();		
	std::cout << "Create and set next prime value from 11: " << num3.getValue() << " " << num3.isValid() << "\n";

	std::cout << "Test if the number is prime (true): " << num3.checkPrime(149) << "\n";		
	std::cout << "Test if the number is prime (false): " << num3.checkPrime(8) << "\n";
}