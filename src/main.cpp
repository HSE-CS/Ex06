#include "Prime.h"

int main()
{
	Prime num1, num2;
	num1.setValue(2);
	cout << "getValue: " << num1.getValue() << endl;

	num2 = num1.nextPrime();
	cout << "nextPrime: " << num2.getValue() << endl;

	bool result = num1.checkPrime(17); 
	cout << "checkPrime: " << result << endl;

	num2.setValue(17);
	int count = num2.countBetween(num1);
	cout << "countBetween: " << count << endl;

	bool ans = num2.isValid();
	cout << "isValid: " << ans << endl;
	return 0;
}