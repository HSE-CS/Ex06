#include <iostream>
#include "Prime.h"

using namespace std;



int main()
{
	Prime num1, num2;
	num1.setValue(2);
	num2 = num1.nextPrime(); 
	bool result = num1.checkPrime(17); 
	cout << "result " << result << endl;
	num2.setValue(17); 
	int count = num2.countBetween(num1); 
	cout << "count " << count << endl;
	bool ans = num2.isValid(); 
	cout << "ans " << ans << endl;
}