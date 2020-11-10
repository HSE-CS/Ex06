#include "Prime.h"
#include <iostream>

using namespace std;

int main() {
    Prime num1, num2;
    num1.setValue(5);
    cout << num1.getValue() << endl;
    cout << num1.nextPrime().getValue() << endl;
    cout << num1.isValid() << endl;
    cout << num1.checkPrime(11) << endl;
    cout << num1.checkPrime(12) << endl;
    num2.setValue(20);
    cout << num1.countBetween(num2) << endl;
}
