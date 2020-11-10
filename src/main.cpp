#include <iostream>
#include "Prime.h"

using namespace std;

int main()
{
    Prime P1;
    P1.setValue(5);
    cout << P1.getValue() << " " << P1.isValid() << endl;
    Prime P2;
    P2.setValue(21);
    cout << P2.getValue() << " " << P2.isValid() << endl;
    Prime P3;
    P3.setValue(23);
    cout << P3.getValue() << " " << P3.isValid() << endl;
    cout << P3.nextPrime().getValue() << endl;
    Prime P4;
    P4.setValue(21);
    cout << P4.getValue() << " " << P4.isValid() << endl;
    Prime P5, P6;
    P5.setValue(13);
    cout << P5.checkPrime(103) << endl;
    P6.setValue(17);
    cout << P5.countBetween(P6) << endl;
    return 0;
}
