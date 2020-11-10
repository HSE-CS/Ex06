#include"Prime.h"
#include<iostream>
using namespace std;

int main(){
	Prime num1, num2;

	num1.setValue(2);
	num2 = num1.nextPrime();          // в num2 устанавливается 3
	cout << "num2.val=(" << num2.val << ")\n";

	bool result = num1.checkPrime(17); // true
	cout << "num1.checkPrime=(" << num1.checkPrime(17) << ")\n";

	num2.setValue(17);              // в num2 устанавливаем 17
	cout << "num2.val=(" << num2.val << ")\n";

	int count = num2.countBetween(num1); // count=5
	cout << "count=(" << count << ")\n";

	bool ans = num2.isValid();        // true
	cout << "ans=(" << ans << ")\n";
	////////////////////////////////
	num1.setValue(193);
	num2 = num1.nextPrime();
	cout << "193->=(" << num2.val << ")\n";//197

	num1.setValue(3);
	num2.setValue(13);
	cout << "{3,13}->=(" << num1.countBetween(num2) << ")\n";//3

	cout << "18-prime?->=(" << num1.checkPrime(18) << ")\n";//no
	cout << "149-prime?->=(" << num1.checkPrime(149) << ")\n";//yes

	return 0;
}