#include <iostream>
#include "Prime.h"

using namespace std;

int main()
{
    Prime val;
    Prime  next_val; 
    cout << "--------------setValue(int)" << endl;
    val.setValue(13);
    cout << val.getValue() << endl;
    cout << "--------------isValid()" << endl;
    if (val.isValid())
    {
        cout << "true" << endl;
    }
    else {
        cout <<" false" << endl;
    }
    cout << "--------------checkPrime(int)" << endl;
    if (val.checkPrime(2))
    {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    cout << "--------------nextPrime()" << endl;
    next_val= val.nextPrime();
    cout << next_val.getValue()<< endl;
    cout << "--------------countBetween(Prime&)" << endl;
    Prime next_next_val= next_val.nextPrime();
    Prime next_next_next_val = next_next_val.nextPrime();
    Prime next_next_next_next_val = next_next_next_val.nextPrime();
    cout << val.countBetween(next_next_next_next_val) << endl;

	return 0;
}