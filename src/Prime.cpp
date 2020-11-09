#include "Prime.h"

using namespace std;

void Prime::setValue(int a)
{
	num = a;
}

bool Prime::isValid()
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

bool Prime::testPrime(int a)
{
    if (a <= 1)
        return 0;

    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return false;
    return true;
}

int Prime::countBetween(Prime& transit)
{
    Prime save;
    if (transit.getValue() > getValue())
    {
        save.setValue(getValue());
        int count = 0;
        while (save.getValue() < transit.getValue())
        {
            count++;
            save = save.nextPrime();
        }
        return count;
    }
    else if (transit.getValue() == getValue())
        return 0;
    else if (transit.getValue() < getValue())
    {
        save.setValue(transit.getValue());
        int count = 0;
        while (save.getValue() < getValue())
        {
            count++;
            save = save.nextPrime();
        }
        return count;
    }
}

Prime Prime::nextPrime()
{
    Prime k;
    k.setValue(getValue() + 1);
    while (!testPrime(k.getValue()))
        k.setValue(k.getValue() + 1);
    return k;
}

int Prime::getValue()
{
    return num;
}