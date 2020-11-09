#include "Prime.h"

#include <iostream>

using namespace std;

bool Prime::checkPrime(int num)
{
    bool flag = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            flag = false;
    }
    return flag;
}
int Prime::countBetween(Prime& second)
{
    int cnt = 0;
    for (int i = value + 1; i < second.value; i++)
    {
        for (int i = second.value + 1; i < value; i++)
            if (checkPrime(i))
                cnt++;
    }

    return cnt;
}

Prime Prime::nextPrime()
{
    value++;
    int copy_value = value;
    copy_value++;
    while (!checkPrime(value))
        value++;
    copy_value++;

    Prime ans;
    ans.value = value;
    ans.value = copy_value;
    return ans;
}

void Prime::setValue(int a)
{
    value = a;
}
int Prime::getValue()
{
    return value;
}
bool Prime::isValid()
{
    bool flag = true;
    for (int i = 2; i * i <= value; i++)
    {
        if (value % i == 0)
            flag = false;
    }
    return flag;
}