#include <iostream>
#include "Prime.h"

using namespace std;

int main()
{
	int n;
	Prime num1,num2;
	num1.setValue(7);
	//num2.setValue(19);
	cout << "We have number:" << endl;
	cout << num1.getValue() << endl;
	//cout << num2.getValue() << endl;
	if (num1.isValid())
		cout << "Number " << num1.getValue() << " is really prime!" << endl;
	else
		cout << "Number " << num1.getValue() << " not is prime!" << endl;
	//////////////////////////////////////////////////////////////////////////
	cout << "Enter one more number" << endl;
	cin >> n;
	num2.setValue(n);
	if (num2.isValid())
		cout << "Number " << num2.getValue() << " is really prime!" << endl;
	else
		cout << "Number " << num2.getValue() << " not is prime!" << endl;
	//////////////////////////////////////////////////////////////////////////
	cout << "Amount of prime numbers between "<< num1.getValue() << " and " <<  num2.getValue() <<" is " << num1.countBetween(num2) << endl;
	cout << "Next prime number after "<< num1.getValue() << " is " << num1.nextPrime().getValue() << endl;
	return 0;
}
