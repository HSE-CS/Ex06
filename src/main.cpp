//
// Created by sharg on 10.11.2020.
//


#include <iostream>

#include "Prime.h"

using namespace std;

int main() {
    Prime newPrime, secondPrime;
    newPrime.setValue(3);
    cout << newPrime.getValue() << endl;

    cout << boolalpha << newPrime.checkPrime(2) << endl;
    cout << boolalpha << newPrime.checkPrime(4) << endl;


    newPrime.setValue(8);
    cout << boolalpha << newPrime.isValid() << endl;

    newPrime.setValue(5);
    cout << newPrime.isValid() << endl;


    newPrime.setValue(23);
    secondPrime = newPrime.nextPrime();
    cout << secondPrime.getValue() << endl;


    newPrime.setValue(2);
    secondPrime.setValue(5);
    cout << newPrime.countBetween(secondPrime) << endl;
    return 0;
}