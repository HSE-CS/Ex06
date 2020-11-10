#include "Prime.h"
#include <iostream>

using namespace std;

int main()
{
    Prime num;
    bool result=num.checkPrime(149);
    printf("%d",result);
    return 0;
}