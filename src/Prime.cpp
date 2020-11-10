#include "Prime.h"

void Prime::setValue(int newValue)
{
    value = newValue;
};

bool Prime::isValid()
{
    return checkPrime(value);
};

bool Prime::checkPrime(int number)
{
    if (number > 1)
    {
        for (size_t i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
                return false;
        }
        return true;
    }
    else
        return false;
};

int Prime::countBetween(Prime &primeNumber)
{
    int primeCount = 0;
    for (int i = value + 1; i < primeNumber.getValue(); ++i)
        if (Prime::checkPrime(i))
            ++primeCount;
    return primeCount;
};

Prime Prime::nextPrime()
{
    int nextPrime = value + 1;
    while (!(checkPrime(nextPrime)))
        ++nextPrime;
    Prime newPrime;
    newPrime.setValue(nextPrime);
    return newPrime;
};

int Prime::getValue()
{
    return value;
};