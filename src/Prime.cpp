#include "Prime.h"
#include <cmath>

void Prime::setValue(int set_num)
{
    num = set_num;
}

bool Prime::isValid()
{
    return testPrime(num);
}

Prime nextPrime(); //TODO

bool Prime::testPrime(int test_num)
{
    for(int i = 2; i <= sqrt(test_num); i++)
        if(test_num % i == 0)
            return false;
    return true;
}

int Prime::countBetween(Prime& between)
{
    int i = 0;
    int j = 0;
    if (num >= between.num)
    {
        i = between.num + 1;
        j = num;
    }
    else
    {
        i = num + 1;
        j = between.num;
    }

    Prime num2;
    int count = 0;
    for (i; i < j; i++)
        if (num2.testPrime(i))
            ++count;

    return count;
}

int Prime::getValue()
{
    return num;
}