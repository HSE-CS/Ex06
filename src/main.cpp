#include <iostream>
#include "Prime.h"

using namespace std;

int main()
{
    Prime num1,num2;

    num1.setValue(2);
    cout << "num1 = " << num1.getValue() << endl;

    num2=num1.nextPrime();
    cout << "next num1 -> num2 = " << num2.getValue() << "\n\n";

    cout << "17 is prime? answer: " << num1.checkPrime(17) << endl;
    cout << "214 is prime? answer: " << num1.checkPrime(214) << "\n\n";

    num1.setValue(190);
    num2.setValue(61);
    cout << "num1 is prime? answer: " << num1.isValid() << endl;
    cout << "num2 is prime? answer: " << num2.isValid() << "\n\n";

    num1.setValue(2);
    num2.setValue(17);
    cout << "count between num1 and num2: " << num2.countBetween(num1) << endl;

    return 0;
}