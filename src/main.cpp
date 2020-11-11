#include <iostream>
#include "Prime.h"
using namespace std;

int main() {
    Prime num1, num2;
    num1.setValue(13);
    num2 = num1.nextPrime();  
    cout << num2.getValue() << endl;
    bool result = num1.checkPrime(17); // true
    num2.setValue(3);              // в num2 устанавливаем 17
    int count = num2.countBetween(num1); // count=5
    cout << count << endl;
    bool ans = num2.isValid();        // true

	return 0;
}