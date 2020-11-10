#include "Prime.h"

void Prime::setValue(int a)
{
    value = a;
}

bool Prime::isValid()
{
    unsigned long i;
    if (value == 2) {
        return true;
    }
    if (value == 0 || value == 1 || value % 2 == 0)
        return false;
    for (i = 3; i * i <= value && value % i; i += 2);
    return (i * i > value);
}

bool Prime::checkPrime(int a)
{
    unsigned long i;
    if (a == 2) {
        return true;
    }
    if (a == 0 || a == 1 || a % 2 == 0)
        return false;
    for (i = 3; i * i <= a && a % i; i += 2);
    return (i * i > a);
}

int Prime::countBetween(Prime &b)
{
    int a = nPrime(value);
    int c = nPrime(b.value);
    if(a - c < 0)
    {
        return c - a - 1;
    }
    else
    {
        return a - c - 1;
    }
}

unsigned long long Prime::nPrime(unsigned n)
{
    unsigned long k = 0;
    for (int i = 2; ; i++)
    {
        if(checkPrime(i))
        {
            k++;
        }
        if(i == n)
        {
            return k;
        }
    }
}

Prime Prime::nextPrime()
{
    Prime a = *this;
    for(int i = a.value + 1; ; i++)
    {
        if(checkPrime(i))
        {
            a.value = i;
            return a;
        }
    }
}

int Prime::getValue()
{
    return value;
}