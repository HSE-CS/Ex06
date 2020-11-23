#include <iostream>
#include "Prime.h"

using namespace std;

int main(){
    Prime num1,num2;
    num1.setValue(6);
    num1.setValue(16);
    num2=num1.nextPrime();
    cout << num2.a << endl;
    bool result=num1.checkPrime(17);
    cout << result << endl;
    result=num1.checkPrime(112);
    cout << result << endl;
    num2.setValue(17);
    cout << num2.a << endl;
    int count=num2.countBetween(num1);
    cout << count << endl;
    bool ans=num2.isValid();
    cout << ans << endl;
    
    return 0;
}
