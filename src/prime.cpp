#include "prime.h"

void Prime::setValue(int val)
{
    value = val;
};

bool Prime::checkPrime(int num)
{
    if(num<=1)
        return false;
    else
    {
        for(int i=2; i<(num/2)+1; i++)
            if(num % i == 0)
                return false;
        return true;
    }
};

bool Prime::isValid()
{
    return checkPrime(value);
}

int Prime::countBetween(Prime &num)
{
    int res = 0;
    for (int i = value + 1; i < num.value; i++)
        if (checkPrime(i))
            res++;
    return res;
}

Prime Prime::nextPrime()
{
    int next = value+1;
    while(checkPrime(next)!=true)
        next++;
    Prime res;
    res.setValue(next);
    return res;
}

int Prime::getValue()
{
    return value;
}