#include "prime.h"

int main()
{
    Prime num1, num2;
    num1.setValue(4);
    cout<<"Number = "<<num1.getValue()<<endl;
    if(num1.isValid()==false)
        num1=num1.nextPrime();
    cout<<"Real prime number? Let's check it"<<endl;
    cout<<"Prime number = "<<num1.getValue()<<endl;
    if(num1.checkPrime(num1.getValue()))
        cout<<"This number is prime now"<<endl;
    num2=num1.nextPrime();
    num2=num2.nextPrime();
    cout<<"Next prime number 2 = "<<num2.getValue()<<endl;
    cout << "Between this numbers " << num1.countBetween(num2) << " prime numbers" << endl;
    return 0;
}