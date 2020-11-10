#include "Prime.h"

void Prime::setValue(int value)
{
    this->value = value;
}

int Prime::getValue()
{
    return this->value;
}

bool Prime::isValid()
{
    if (this->value < 2)
        return false;

    for (int i = 2; i < this->value; i++)
        if (this->value % i == 0)
            return false;
    return true;
}

bool Prime::checkPrime(int num)
{
    Prime tmp;
    tmp.setValue(num);
    return tmp.isValid();
}

Prime Prime::nextPrime()
{
    Prime next;
    next.setValue(this->value + 1);
    while (!next.isValid())
        next.setValue(next.getValue() + 1);
    return next;
}

int Prime::countBetween(Prime& another)
{
    if (this->value == another.getValue())
        return 0;

    Prime first, second;
    if (this->value < another.getValue())
    {
        first.setValue(this->value);
        second.setValue(another.getValue());
    }
    else
    {
        first.setValue(another.getValue());
        second.setValue(this->value);
    }

    int counter = 0;
    while (first.getValue() < second.getValue())
    {
        first = first.nextPrime();
        counter++;
    }

    return counter-1;
}

