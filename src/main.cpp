#include "Prime.h"

int main() {
	Prime num1, num2;
	num1.setValue(5);
	std::cout << "num1: " << num1.getValue() << std::endl;
	num1.setValue(4);
	std::cout << "num1.checkprime: " << num1.checkPrime(num1.getValue()) << std::endl << "num1.isvalid:" << num1.isValid() << std::endl;
	num2 = num1.nextPrime();
	std::cout << "num2: " << num2.getValue() << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		num2 = num2.nextPrime();
		std::cout << "num2.nextprime" << num2.getValue() << std::endl;
	}
	std::cout << "num2: now" << num2.getValue() << std::endl;
	std::cout << "countbetween num1 and num2: " << num1.countBetween(num2) << std::endl;



}