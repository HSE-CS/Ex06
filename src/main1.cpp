#include <iostream>
#include "../include/Prime.h"

int main () {
    Prime pNum;
    pNum.setValue(5);
    std::cout << pNum.getValue() <<"\n";
    std::cout << pNum.isValid() <<"\n";
    std::cout << pNum.checkPrime(8) <<"\n";

    Prime pNext = pNum.nextPrime();
    Prime pNextTwo = pNext.nextPrime();
    Prime pNextThree = pNextTwo.nextPrime();

    std::cout << pNext.getValue() <<"\n";
    std::cout << pNextTwo.getValue() <<"\n";

    std::cout << pNum.countBetween(pNextThree) <<"\n";


    return 0;
} 