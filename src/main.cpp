#include <iostream>
#include "Prime.h"

int main()
{
	Prime num1, num2;
	num1.setValue(11);
	num2.setValue(13);
	int result = num1.countBetween(num2);
	std::cout << result;
}