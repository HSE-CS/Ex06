#include <iostream>
#include "../include/Prime.h"
using namespace std;

int main(){
	Prime test;
	cout << test.getValue() << endl;

	Prime num1,num2;
	num1.setValue(2);
	num2=num1.nextPrime();          // in num2 we set 3
	cout << num2.getValue() << endl;
	bool result=num1.checkPrime(17); // true
	cout << result << endl;
	num2.setValue(17);              // in num2 we set 17
	int count=num2.countBetween(num1); // count=5
	cout << count << endl;
	bool ans=num2.isValid();        // true
	cout << ans << endl;


	cout << "Hello World!";
	return 0;
}
