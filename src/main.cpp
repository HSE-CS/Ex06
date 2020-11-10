//
// Created by Vadim Makarov on 10.11.2020.
//

#include <iostream>
#include "Prime.h"

using namespace std;

int main(){
    int value = 227;

    Prime prime, prime2;

    prime2.setValue(3);
    prime.setValue(13);
    cout << "getValue, setValue check: Положили - " << 13 << " | Достали - " << prime.getValue() << "\n";
    cout << "isValid check: Число - " << 13 << " | Ответ - " << prime.isValid() << "\n";
    cout << "checkPrime check: Число - " << value << " | Ответ - " << prime.checkPrime(value) << "\n";
    cout << "countBetween check: Промежуток - " << "от " << prime2.getValue() << " до " << prime.getValue() << " | Ответ - " << prime.countBetween(prime2) << "\n";
    cout << "nextPrime check: Изначальное число - " << prime.getValue() << " | Ответ - " << prime.nextPrime().getValue() << "\n";

}
