#include "Prime.h"
#include <iostream>

using namespace std;

int main()
{
	Prime num1, num2;
	num1.setValue(3);
	cout << num1.getValue() << endl;

	num2 = num1.nextPrime();
	cout << num2.getValue() << endl;

	cout << num1.checkPrime(11) << endl;
	cout << num1.checkPrime(6) << endl;

	num2.setValue(11);
	cout << num2.countBetween(num1) << endl;

	cout << num2.isValid() << endl;
	return 0;
}