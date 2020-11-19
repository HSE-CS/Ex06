#include <iostream>
#include "Prime.h"

int main()
{
	Prime num1, num2;
	num1.setValue(2);
	std::cout << num1.value << "\n";
	num2 = num1.nextPrime();          // в num2 устанавливается 3
	std::cout << num2.value << "\n";
	bool result = num1.checkPrime(17); // true
	std::cout << result << "\n";
	num2.setValue(17);              // в num2 устанавливаем 17
	std::cout << num2.value << "\n";
	int count = num2.countBetween(num1); // count=5
	std::cout << count << "\n";
	bool ans = num2.isValid();        // true
	std::cout << ans << "\n";
	bool ans2 = num1.checkPrime(3);
	std::cout << ans2 << "\n";
	count = num2.getValue();
	std::cout << count << "\n";
}