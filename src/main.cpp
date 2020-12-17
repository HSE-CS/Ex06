#include <iostream>
#include "Prime.h"

int main(){
    Prime n1,n2;
    n1.setValue(2);
    std::cout<<n1.getValue()<<std::endl;
    n2=n1.nextPrime();         
    std::cout<<n2.getValue()<<std::endl;
    bool result=n1.checkPrime(17); 
    std::cout<<result<<std::endl;
    n2.setValue(17);           
    std::cout<<n2.getValue()<<std::endl;
    int count=n2.countBetween(n1); 
    std::cout<<count<<std::endl;
    bool ans=n2.isValid();      
    std::cout<<ans<<std::endl;
}