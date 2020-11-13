#include "Prime.h"

int main(){

    Prime *p = new Prime();
    cout << "Input a number:\n";
    int input; cin >> input;
    p->setValue(input);
    cout << "Your number:\n" << p->getValue() << endl;

    cout << "Is num valid ?\n" << p->isValid() <<endl;

    cout << "Are nums 3 6 valid?\n" << p->checkPrime(3) <<" " << p->checkPrime(6) << endl;

    Prime new_p;
    new_p.setValue(20);
    cout << "Amount of valid numbers between " << p->getValue() << " and " << new_p.getValue() << ":\n" << p->countBetween(new_p) << endl;

    cout << "Next prime after " << p->getValue() << ":\n" << p->nextPrime().getValue() << endl;

    return 0;
}