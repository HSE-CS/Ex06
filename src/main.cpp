#include "../include/Prime.h"

int main(){
    Prime number;
    number.setValue(10);
    if (!number.isValid()){
        number = number.nextPrime();
    }
    cout << number.getValue() << endl;

    Prime num;
    num.setValue(10);
    cout << "number of prime betwin 10 and nextPrime(10) is " << number.countBetween(num) << endl;
    return 0;
}