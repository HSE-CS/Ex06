#include"Prime.h"

void Prime::setValue(int n)
{ number = n; }

bool Prime::isValid(){
    return checkPrime(number);}

bool Prime::checkPrime(int n){
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
        return true;
    }
    else
        return false;
}
int Prime::countBetween(Prime& another_number) {
    int max,min;
    if ( another_number.number > number) {
        max = another_number.number;
        min = number;
    }
    else {
        max = number;
        min = another_number.number;
    }
    int count=0;
    do {
        max--;
        if ( checkPrime(max) )
            count++;

    } while ( max > min + 1 );

    return count;}

Prime Prime::nextPrime() {
        int value = number;
        while (true) {
            value++;
            if (checkPrime(value)) {
                Prime num;
                num.setValue(value);
                return num;
            }
        }
    }
int Prime::getValue(){
    return this->number;
}