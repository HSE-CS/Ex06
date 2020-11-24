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
    int g = num.getValue();
    if (g < number)
        return _countBetween(g+1, number);
    else
        return _countBetween(number+1, g);
}
Prime Prime::nextPrime(){
    Prime newNumber{};
    int x = number + 1;
    while(!checkPrime(x))
        x++;
    newNumber.setValue(x);
    return newNumber;
}
int Prime::getValue() {
    return number;
}