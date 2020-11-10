#include "Prime.h"
#include <algorithm>

void Prime::setValue(int num)
{
    this->num = num;
}

bool Prime::isValid()
{
    return this->checkPrime(this->num);
}

bool Prime::checkPrime(int num)
{
    if (!num)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (!(num % i))
            return 0;
    }
    return 1;
}

int Prime::countBetween(Prime &b)
{
    int counter = 0;
    Prime tmp;
    tmp.num = std::min(this->num, b.num);
    while (tmp.num < std::max(this->num, b.num))
    {
        tmp = tmp.nextPrime();
        counter++;
    }
    return counter - 1;
}

int Prime::getValue()
{
    return this->num;
}

Prime Prime::nextPrime()
{
    Prime tmp;
    int n = this->num;
    do
        n++;
    while (!this->checkPrime(n));
    tmp.setValue(n);
    return tmp;
}