#include "Prime.h"
#include <iostream>

using namespace std;

int main()
{
	Prime a;
	cout << a.getValue()<<endl;
	a.setValue(11);
	cout << a.getValue() << " " << a.isValid() << endl;
	cout << a.checkPrime(7) <<" "<< a.checkPrime(10000) << endl;
	Prime b = a.nextPrime();
	cout << b.getValue() << endl;
	Prime c;
	c.setValue(907);
	cout << a.countBetween(c)<<endl;
}