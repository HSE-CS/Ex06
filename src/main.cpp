#include <iostream>
#include "Prime.h"
using namespace std;

int main() {
    Prime num1,num2;
    num1.setValue(13);
    num2=num1.nextPrime();
    cout << num2.getValue();
    num2.setValue(17);
    
    return 0;
}
