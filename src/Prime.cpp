#include "Prime.h"
void Prime::setValue(int val)
{
    this->value = val;
}
int Prime::getValue()
{
    return this->value;
}
bool Prime::checkPrime(int val)
{
    if (val == 1)
        return false;
    for (auto i = 2; i <= sqrt(val); i++)
    {
        if (val % i == 0)
            return false;
    }
    return true;
}
bool Prime::isValid()
{
    return checkPrime(this->value);
}
Prime Prime::nextPrime()
{
    int ans = getValue() + 1;
    while (!checkPrime(ans))
        ans++;
    Prime next_prime;
    next_prime.setValue(ans);
    return next_prime;
}
void Prime::setNextPrime()
{
    this->setValue(this->nextPrime().getValue());
}
int Prime::countBetween(Prime& prime)
{
    int min_val = std::min (prime.value, this->value);
    int max_val = std::max (prime.value, this->value);
    Prime curr_prime;
    curr_prime.setValue(min_val);
    curr_prime.setNextPrime();
    int count = 0;
    while (curr_prime.value < max_val)
    {
        count++;
        curr_prime.setNextPrime();
    }
    return count;
}


