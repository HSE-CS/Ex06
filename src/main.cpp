#include <iostream>
#include "Prime.h"
#include<cmath>

using namespace std;

int main() {
	Prime num;
	num.setValue(2);
	int result = num.getValue();
	cout << result << endl;
	num.setValue(21);
	bool result2 = num.isValid();
	cout << result2 << endl;
	num.setValue(193);
	bool result3 = num.isValid();
	cout << result3 << endl;
	Prime num1, num2;
	num1.setValue(193);
	num2 = num1.nextPrime();
	int result4 = num2.getValue();
	cout << result4 << endl;

}