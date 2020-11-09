#include "Prime.h"

int main (){
    Prime num1, num2;
    num1.Prime::setValue(2);
    std::cout << num1.Prime::getValue()<< "\n";
    
    num2 = num1.Prime::nextPrime(); // в num2 устанавливается 3
    std::cout << num2.Prime::getValue()<< "\n";
    bool result = num1.Prime::testPrime(17); // true
    std::cout << result<< "\n";
    num2.Prime::setValue(17); // в num2 устанавливаем 17
    std::cout << num2.Prime::getValue()<< "\n";
    int count = num2.Prime::countBetween(num1); // count=5
    std::cout << count<<"\n";
        
    return 0;
}