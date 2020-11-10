#include <stdio.h>
#include <iostream>
#include "Prime.h"

using namespace std;
int main() {
    Prime n1, n2;
    n1.setValue(2);
    n2 = n1.nextPrime();
    cout<<n1.isValid()<<" "<<n2.checkPrime(15)<<endl;
    Prime n3 = n3.nextPrime();
    cout<<n2.countBetween(n3)
}

