#include "Prime.h"
#include <iostream>

using namespace std;

int main()
{
	Prime num1, num2;
	num1.setValue(5);
	if (num1.isValid())
		cout << "num1 is prime number\n";
	else
		cout << "num1 is not prime number\n";
	num2 = num1.nextPrime();
	int count = num1.countBetween(num2);
	int count2 = num2.countBetween(num1);
	cout << "Value of num1 is " << num1.getValue() << endl;
	cout << "Value of num2 is " << num2.getValue() << endl;
	cout << "Count between num1 and num2 is " << count << " " << count2;
	return 0;
};