#include "Prime.h"
#include <iostream>

int main()
{
	Prime num;
	bool result = num.checkPrime(149);

	std::cout << result;

	return 0;
}