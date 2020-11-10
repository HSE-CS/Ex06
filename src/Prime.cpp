#include "Prime.h"
#include <iostream>

using namespace std;

void Prime::setValue(int N)
{
    Num = N;
}

bool Prime::checkPrime(int N)
{
    for (int i = 2; i < N - 1; ++i)
    {
        if (!(N % i))
        {
            return false;
        }
    }
    return true;
}

int Prime::getValue()
{
    return Num;
}

Prime Prime::nextPrime()
{
    int i = Num + 1;
    while (true)
    {
        if (checkPrime(i))
        {
            Prime Z;
            Z.setValue(i);
            return Z;
        }
        ++i;
    }
}

int Prime::countBetween(Prime &Prime2)
{
    int cou = 0;
    if (Num < Prime2.getValue())
    {
        for (int i = Num+1; i <= Prime2.getValue()-1; i++)
        {
            if (checkPrime(i))
            {
                cou++;
            }
        }
    } else
    {
        for (int i = Prime2.getValue()+1; i <= Num-1; i++)
        {
            if (checkPrime(i))
            {
                cou++;
            }
        }
    }
    return cou;
}

bool Prime::isValid()
{
    return checkPrime(Num);
}
