#include<iostream>
#include"prime.h"
using namespace std;

int main()
{

	Prime a, b, c;
	a.setValue(10);
	cout<< a.getValue() << endl;
	cout<< a.isValid() << endl;
	cout << a.checkPrime(3) << endl;
	b = a.nextPrime();
	cout << b.getValue() << endl;
	c.setValue(20);
	cout << a.countBetween(c);



}