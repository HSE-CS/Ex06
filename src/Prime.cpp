#include "Prime.h"
#include <cmath>

void Prime::setValue(int num)
{
    this->num = num;
}

bool Prime::isValid()
{
    return checkPrime(this->num);
}

Prime Prime::nextPrime()
{
    Prime next_num;
    int x = this->num + 1;
    while (!checkPrime(x))
        x++;
    next_num.num = x;
    return next_num;
}

bool Prime::checkPrime(int num)
{
    if (num < 2)
        return false;
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return false;
    return true;
}

int Prime::countBetween(Prime& num)
{
    int i = 0;
    int j = 0;
    if (this->num >= num.num)
    {
        i = num.num + 1;
        j = this->num;
    }
    else
    {
        i = this->num + 1;
        j = num.num;
    }

    Prime num2;
    int count = 0;
    for (i; i < j; i++)
        if (num2.checkPrime(i))
            ++count;

    return count;
}

int Prime::getValue()
{
    return this->num;
}