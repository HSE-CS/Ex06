#include "Prime.h"
#include <iostream>

using namespace std;

int main() {
	Prime num1, num2;
    num1.setValue(2); // 2
    num2 = num1.nextPrime(); // 3

    bool result = num1.checkPrime(17); 
    cout << result << endl; //1

    num2.setValue(17); // 17          
    int count = num2.countBetween(num1);
    bool ans = num2.isValid();
    cout << count << "   " << ans; // 5 1
}