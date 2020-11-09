#include "Prime.h"
#include <iostream>

void Prime::setValue(int n) {
    value = n;
    prime = checkPrime(n);
}