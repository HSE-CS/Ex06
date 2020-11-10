#include "Prime.h"
#include <iostream>

int main() {
    Prime num1{}, num2{};
    num1.setValue(5);
    std::cout << num1.getValue() << "\n";
    std::cout << num1.nextPrime().getValue() << "\n";
    std::cout << num1.isValid() << "\n";
    std::cout << num1.checkPrime(28) << "\n";
    std::cout << num1.checkPrime(29) << "\n";
    num2.setValue(17);
    std::cout << num1.countBetween(num2) << "\n";
}