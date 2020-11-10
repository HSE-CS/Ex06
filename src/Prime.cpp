#include "Prime.h"
//using namespace ;

int Prime::_countBetween(int smaller, int bigger){
    int c = 0;
    while(smaller < bigger){
        if (Prime::checkPrime(smaller)) c++;
        smaller++;
    }
    return c;
}


void Prime::setValue(int num){
    number=num;
}
bool Prime::isValid(){
    return checkPrime(number);
}
bool Prime::checkPrime(int num){
    for(int i = 2; i <= num/2; i++){
        if (num%i == 0)
            return false;
    }
    return num != 1;
}
int Prime::countBetween(Prime& num){
    int g = num.getValue() + 1;
    if (g < number)
        return _countBetween(g, number);
    else
        return _countBetween(number, g);
}
Prime Prime::nextPrime(){
    int x = number;
    while(!checkPrime(x))
        x++;
    setValue(x);
}
int Prime::getValue() {
    return number;
}