#include <iostream>
#include "Prime.h"

using namespace std;

int main() {
    Prime num;
    num.setValue(3);
    cout << '\n';
    cout << "Num value is set to " << num.getValue() << '\n';
    cout << "Num is a prime number: " << std::boolalpha << num.isValid() << '\n';
    cout << "Next prime number to Num is " << num.nextPrime().getValue() << '\n' << '\n';

    Prime num2;
    num2.setValue(17);
    cout << "Num2 value is set to " << num2.getValue() << '\n';
    cout << "Num2 is a prime number: " << std::boolalpha << num2.isValid() << '\n';
    cout << "Next prime number to Num2 is " << num2.nextPrime().getValue() << '\n' << '\n';

    cout << "There are " << num.countBetween(num2) << " prime numbers between Num and Num2" << '\n' << '\n';

    int x = 16;
    cout << "Int X value is set to " << x << '\n';
    cout << "X is a prime number: " << std::boolalpha << num.checkPrime(x) << '\n';
}