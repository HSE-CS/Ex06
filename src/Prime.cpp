#include "Prime.h"

void Prime::setValue(int num) //- установить число
	{
	number = num;
	} 


bool Prime::isValid() //- проверка, действительно ли установленное число простое
{ 
	for (int i = 2; i <= sqrt(number); i++)
		if (number % i == 0)
			return false;
	return true;

} 

bool Prime::checkPrime(int num)// - проверка переданного числа на простоту
	{
		for (int i = 2; i <= sqrt(num); i++)
			if (num % i == 0)
				return false;
		return true;
	}
int Prime::countBetween(Prime& num2)// - подсчет количества простых чисел между установленным и переданным
{
	int k = 0;
	for (int i = number + 1; i < num2.number; i++)
	{
		for (int i = num2.number + 1; i < number; i++)
			if (checkPrime(i))
				k++;
	}
	return k;
}
Prime Prime::nextPrime()// - возвращение простого числа, расположенного следом за установленным
{
	Prime nvalue;
	int n = number;
	while (!checkPrime(n)) {
		n++;
	}
	nvalue.number = n;
	return nvalue;
}
		
int Prime::getValue()// - возвращение установленного числа.
	{
	return number;
	}
