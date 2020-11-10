#include <iostream>
#include "Prime.h"
using namespace std;

int main() {
    Prime num1,num2;
    num1.setValue(13);
    num2=num1.nextPrime();          // в num2 устанавливается 3
    cout << num2.getValue();
    num2.setValue(17);              // в num2 устанавливаем 17
    //Scout << num2.countBetween(num1) << endl;
    return 0;
}
