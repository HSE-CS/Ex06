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
    save.setValue(num);
    int count = 0;
    while (save.num < transit.num)
    {
        count++;
        save.nextPrime();
    }

}

Prime Prime::nextPrime()
{
    Prime k;
    k.setValue(num + 1);
    while (!testPrime(k.num))
        k.setValue(k.num + 1);
    return k;
}