#include <iostream>
#include "Prime.h"

using namespace std;

int main(){
    int value = 347;

    Prime prime, prime2;

    prime2.setValue(3);
    prime.setValue(13);
    cout << prime.getValue() << "\n";
    cout << prime.isValid() << "\n";
    cout << prime.checkPrime(value) << "\n";
    cout << prime.countBetween(prime2) << "\n";
    cout << prime.nextPrime().getValue() << "\n";

}
