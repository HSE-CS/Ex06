#include "Prime.h"
#include <cstring>
#include <iostream>


int main()
{
	Prime num;
	num.setValue(2);
	int result=num.getValue();
	std :: cout << result << std :: endl;
	num.setValue(21);
	bool result1=num.isValid();
	std :: cout << result1 << std :: endl;
	Prime num1,num2;
	num1.setValue(193);
	num2=num1.nextPrime();
	int result2=num2.getValue();
	std :: cout << result2 << std :: endl;
	num1.setValue(3);
	num2.setValue(13);
	int result3=num1.countBetween(num2);
	std :: cout << result3 << std :: endl;
	bool result4=num.checkPrime(18);
	std :: cout << result4 << std :: endl;
	
	
}
