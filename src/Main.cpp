#include "Prime.h"
#include <iostream>
int main(){
    Prime num;
    num.setValue(2);
    std::cout<<num.getValue()<<"\n";

    num.setValue(21);
    std::cout<<num.isValid()<<"\n";
    num.setValue(193);
    std::cout<<num.isValid()<<"\n";

    Prime num2;
    num.setValue(193);
    num2 = num.nextPrime();
    std::cout<<num2.getValue()<<"\n";

    num.setValue(3);
    num2.setValue(13);
    std::cout<<num.countBetween(num2)<<"\n";

    std::cout<<num.checkPrime(18)<<"\n";
}