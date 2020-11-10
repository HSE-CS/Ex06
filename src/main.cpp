#include "Prime.h"
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	Prime number1, number2;
	number1.setValue(2);
	cout << "SetValue of number1 : " << number1.getValue() << endl;
	number2 = number1.nextPrime();
	cout << "NextPrime of number1 : " << number1.nextPrime().getValue() << endl;
	bool result = number1.checkPrime(149);
	cout << "CheckPrime of number1 : " << result << endl;
	number2.setValue(21);
	int count = number2.countBetween(number1);
	cout << "CountBetween : " << count << endl;
	bool ans = number2.isValid();
	cout << "IsValid of number2 : " << ans << endl;
}