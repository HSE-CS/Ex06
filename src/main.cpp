#include "Prime.h"
#include <iostream>

using namespace std;

int main()
{
	Prime num1, num2;
	num1.setValue(2);
	num2 = num1.nextPrime();          
	cout << "next for 2 prime is " << num2.getValue() << endl;

	bool result = num1.checkPrime(17); 
	cout << "17 is a prime means " << result << endl;

	num2.setValue(17); 
	bool ans = num2.isValid();
	cout << "num2 is valid prime means " << ans << endl;

	int newValue = num2.getValue();
	cout << "num2 is " << newValue << endl;
	
	int count = num2.countBetween(num1);
	cout << "Primes between 2 and " << newValue << ' ' << count << endl;

	num1.setValue(4);
	cout << "4 is prime number means " << num1.isValid() << endl;

	return 0;
}