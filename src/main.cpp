#include "Prime.h"
#include <iostream>


int main()
{
    Prime num1, num2;
    num1.setValue(53);

    num2 = num1.nextPrime();                  
    std::cout << "The first number is: " << num1.getValue() << std::endl;
    std::cout << "The second number is: " << num2.getValue() << std::endl;

    int number = 16;
    bool result = num1.checkPrime(number);        
    std::cout << "Is the " << number << " prime? " << (result == true ? "true" : "false") << std::endl;

    num2.setValue(17);                        
    std::cout << "The second number is: " << num2.getValue() << std::endl;

    std::cout << "The next prime number of the second number is: " << num2.nextPrime().getValue() << std::endl;

    int count = num2.countBetween(num1);       
    std::cout << "The number of prime numbers between the first and the second numbers is: " << count << std::endl;

    bool ans = num2.isValid();                 
    std::cout << "Is the second prime number valid? " << (ans == true ? "true" : "false") << std::endl;


	return 0;
}