#include "Prime.h"

int main() {
    Prime num, num1, num2, num3, num4, num5, num6, num7;
    num.setValue(2);
    int result=num.getValue();
    cout << result<< endl;
    num1.setValue(2);
    num2 = num1.nextPrime();
    cout << num1.getValue()<< endl;
    bool result_1 =num.checkPrime(149);
    cout << result_1<< endl;
    num3.setValue(11);
    num4.setValue(13);
    int result_3 = num3.countBetween(num4);
    cout << result_3<< endl;
    num5.setValue(3);
    num6.setValue(13);
    int result_4=num5.countBetween(num6);
    cout << result_4<< endl;

}