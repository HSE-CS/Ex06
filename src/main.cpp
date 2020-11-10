#include "Prime.h"
#include<iostream>

using namespace std;

int main() {

Prime v;
v.setValue(3);
cout << v.getValue()<< endl;

Prime w;
w = v.nextPrime();

bool tf1 = v.isValid;
cout << tf1 << endl;

bool tf2 = v.checkPrime(13);
cout << tf1 << endl;

int count = w.countBetween(v);
cout << count << endl;


	return 0;
}