//
// Created by freeb on 09.11.2020.
//

#include <iostream>
#include "Prime.h"

using namespace std;

int main(){
    Prime num1{}, num2{};
    num1.setValue(2);
    num2=num1.nextPrime();          // в num2 устанавливается 3
    cout << num2.getValue() << endl;
    bool result=num1.checkPrime(17); // true
    cout << result << endl;
    num2.setValue(17);              // в num2 устанавливаем 17
    cout << num2.getValue() << endl;
    int count=num2.countBetween(num1); // count=5
    cout << count << endl;
    bool ans=num2.isValid();        // true
    cout << ans << endl;
}
