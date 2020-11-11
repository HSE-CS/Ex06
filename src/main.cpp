#include "../include/Prime.h"
#include <iostream>

int main() {
  Prime num1, num2;
  num1.setValue(4);
  std::cout << num1.getValue() << " - ";
  if (num1.isValid()) {
    std::cout << "prime number" << '\n';
  } else {
    std::cout << "not prime number" << '\n';
  }
  num1.setValue(5);
  num2.setValue(23);
  std::cout << "Next prime number after " << num1.getValue()
            << " is " << num1.nextPrime().getValue() << '\n';
  int test_number = 17;
  if (num1.checkPrime(17)) {
    std::cout << test_number << " - prime number" << '\n';
  } else {
    std::cout << test_number << " - not prime number" << '\n';
  }
  std::cout << "There are " << num1.countBetween(num2) << " prime numbers between "
            << num1.getValue() << " and " << num2.getValue() << '\n';
}