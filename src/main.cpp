#include <iostream>

#include "Prime.h"

using namespace std;

int main() {
	
	Prime num;
	num.setValue(2);
	int result = num.getValue();
	cout << 2 << "-" << result << endl;
	cout << "-------------------------" << endl;
	Prime num2;
	num2.setValue(21);
	bool result2 = num2.isValid();
	cout << false << "-" << result2 << endl;
	cout << "-------------------------" << endl;
	Prime num3;
	num3.setValue(193);
	bool result3 = num3.isValid();
	cout << true << "-" << result3 << endl;
	cout << "-------------------------" << endl;
	Prime num4, num5;
	num4.setValue(193);
	num5 = num4.nextPrime();
	int result4 = num5.getValue();
	cout << 197 << "-" << result4 << endl;
	cout << "-------------------------" << endl;
	Prime num6, num7;
	num6.setValue(3);
	num7.setValue(13);
	int result5 = num6.countBetween(num7);
	cout << 3 << "-" << result5 << endl;
	cout << "-------------------------" << endl;
	Prime num8, num9;
	num8.setValue(11);
	num9.setValue(13);
	int result6 = num8.countBetween(num9);
	cout << 0 << "-" << result6 << endl;
	cout << "-------------------------" << endl;
	Prime num10;
	bool result10 = num10.checkPrime(18);
	cout << false << "-" << result10 << endl;
	cout << "-------------------------" << endl;
	Prime num11;
	bool result11 = num11.checkPrime(149);
	cout << true << "-" << result11 << endl;
	cout << "-------------------------" << endl;

    return 0;
}