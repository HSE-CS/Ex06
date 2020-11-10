#include "Prime.h"
#include <iostream>

using namespace std;


int main()
{
    Prime num1,num2;
    num1.setValue(2);
    cout<<num1.isValid()<<endl;
    cout<<num1.getValue()<<endl;
    num2=num1.nextPrime();  
    cout<<num2.getValue()<<endl;       
    bool result=num1.checkPrime(17); 
    cout<<result<<endl;
    num2.setValue(17);              
    int count=num2.countBetween(num1);
    cout<<count<<endl; 
           
   return 0;
}
