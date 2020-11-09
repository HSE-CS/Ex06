#include "Prime.h"
#include <iostream>
#include <algorithm>

void Prime::setValue(int a){

pr=a;
}

int Prime::getValue() const{
    return pr;
}

bool Prime::testPrime(int a) const{
    for (size_t i=a-1;i>1;i--){
if (a%i==0) return false;
}
return true;
}

bool Prime::isValid() const{
    return Prime::testPrime(pr);
}

int Prime::countBetween(Prime& pr2) const{
    prime_t a,b;
    a=pr;
    b=pr2.getValue();
    size_t mx=std::max(a,b);
    size_t count=0;
    for (size_t i=(std::min(a,b))+1;i<mx;i++){
        if (Prime::testPrime(i)) count++;
    };
    return count;
}

Prime Prime::nextPrime() const{
    Prime next;
    prime_t i=pr+1;
    while (!(Prime::testPrime(i))) {
        i++;
    }
    next.setValue(i);
    return next;
}

