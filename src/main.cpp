#include "Prime.h"
#include <iostream>
#include <cstring>

int main()
{
Prime num1, num2;

    num1.setValue(4);
    std::cout << num1.isValid() << std::endl;

    num2 = num1.nextPrime();          
    std::cout << num2.getValue() << std::endl;

    bool result = num1.checkPrime(17); 
    std::cout << result << std::endl;

    num2.setValue(17);              

    int count = num2.countBetween(num1); // count=5
    std::cout << count << std::endl;
return 0;
}
