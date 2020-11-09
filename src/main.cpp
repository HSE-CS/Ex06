#include "Prime.h"
#include <iostream>


int main()
{
    Prime num1,num2;
    num1.setValue(2);
    std::cout<<num1.isValid()<<endl;
    std::cout<<num1.getValue()<<endl;
    num2=num1.nextPrime();  
    std::cout<<num2.getValue()<<endl;       
    bool result=num1.testPrime(17); 
    std::cout<<result<<endl;
    num2.setValue(17);              
    int count=num2.countBetween(num1);
    std::cout<<count<<endl; 
           
   return 0;
}
