#include <iostream>
#include "Prime.h"

int main(){
    Prime num1,num2;
    num1.setValue(2);
    std::cout<<num1.getValue()<<std::endl;
    num2=num1.nextPrime();          // в num2 устанавливается 3
    std::cout<<num2.getValue()<<std::endl;
    bool result=num1.checkPrime(17); // true
    std::cout<<result<<std::endl;
    num2.setValue(17);              // в num2 устанавливаем 17
    std::cout<<num2.getValue()<<std::endl;
    int count=num2.countBetween(num1); // count=5
    std::cout<<count<<std::endl;
    bool ans=num2.isValid();        // true
    std::cout<<ans<<std::endl;
}