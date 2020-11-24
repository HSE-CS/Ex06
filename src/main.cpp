#include "Prime.h"
#include <iostream>

using namespace std;
int main()
{
    Prime num1,num2;
    num1.setValue(193);
    num2=num1.nextPrime();
    int result1=num2.getValue();
    num1.setValue(11);
    num2.setValue(13);
    int result2=num1.countBetween(num2);
    num1.setValue(2);
    num2=num1.nextPrime();          // в num2 устанавливается 3
    bool result=num1.checkPrime(17); // true
    num2.setValue(17);              // в num2 устанавливаем 17
    int count=num2.countBetween(num1); // count=5
    bool ans=num2.isValid();        // true
    cout << result1 << endl;
    cout << result2 << endl;
    cout << count << endl;
    cout << ans << endl;
}