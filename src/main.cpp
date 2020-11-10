#include <iostream>
#include "Prime.h"

int main() {
    Prime num1, num2;

    num1.setValue(193);
    std::cout << "num1 = " << num1.getValue() << std::endl;

    bool ans = num1.isValid(); //true
    std::cout << num1.getValue() << " is (valid = 1; non-valid = 0) "<< ans << std::endl;

    num2 = num1.nextPrime(); //197
    std::cout << "next Prime for " << num1.getValue() << " is " << num2.getValue() << std::endl;

    num1.setValue(11);
    num2.setValue(13);
    int count = num1.countBetween(num2); //0
    std::cout << "number of primes between " << num1.getValue() << " and "
    << num2.getValue() << " is " << count << std::endl;

    bool res = num1.checkPrime(18); //false
    std::cout << num1.getValue() <<  " is (prime = 1, non-prime = 0) " << res << std::endl;
}