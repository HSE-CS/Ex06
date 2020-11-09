#include <iostream>
#include "prime.h"

int main()
{
    Prime num1, num2, num3;
    num1.setValue(rand()/1000);
    num2.setValue(num1.getValue() + 100);
    num3 = num1.nextPrime();
    std::cout << num1.getValue() << "\t" << num2.getValue() << "\t" << num3.getValue() << std::endl;
    int count = num1.countBetween(num2);
    std::cout << count << std::endl;
    if (num1.checkPrime(num1.getValue())) std::cout << num1.getValue() << "\t" <<num1.isValid() << std::endl;
    else std::cout << num1.getValue() << "\t" << num1.nextPrime().isValid() << std::endl;
}