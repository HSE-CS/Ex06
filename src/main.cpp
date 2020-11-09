#include "Prime.h"

int main()
{
    Prime primeNum1;
    primeNum1.setValue(8);
    std::cout << "Prime number 1 = " << primeNum1.getValue() << std::endl;
    if (!(primeNum1.isValid()))
        primeNum1 = primeNum1.nextPrime();
    std::cout << "Prime number 1 = " << primeNum1.getValue() << std::endl;
    if (primeNum1.checkPrime(primeNum1.getValue()))
        std::cout << "Number is prime now !!!" << std::endl;
    Prime primeNum2 = primeNum1.nextPrime();
    std::cout << "Prime number 2 = " << primeNum2.getValue() << std::endl;
    std::cout << "Between prime numbers 1 and 2  " << primeNum1.countBetween(primeNum2) << "  prime numbers" << std::endl;
    primeNum2 = primeNum2.nextPrime();
    std::cout << "Prime number 2 = " << primeNum2.getValue() << std::endl;
    std::cout << "Between prime numbers 1 and 2  " << primeNum1.countBetween(primeNum2) << "  prime numbers" << std::endl;
    return 0;
}