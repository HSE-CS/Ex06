#include "Prime.h"
#include <iostream>

int main()
{
	Prime n1, n2, n3;
	n1.setValue(3);
	cout << n1.getValue() << endl;
	cout << n1.isValid() << endl;
	cout << n1.checkPrime(11) << endl;
	n3.setValue(17);
	cout << n1.countBetween(n3) << endl;
	n2 = n1.nextPrime();
	cout << n2.getValue() << endl << endl;
	n1.setValue(4);
	cout << n1.getValue() << endl;
	cout << n1.isValid();
	return 0;
}