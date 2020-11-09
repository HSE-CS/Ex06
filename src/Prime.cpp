#include"Prime.h"
#include<cmath>

void Prime::setValue(int x)      //- установить число
{
	val = x;
};
bool Prime::isValid()            //- проверка, действительно ли установленное число простое
{
	for (int i = 2; i <= sqrt(val); ++i) {
		if (val % i == 0) {
			return false;
		}
	}
	return true;
};
bool Prime::checkPrime(int x)    //- проверка переданного числа на простоту
{
	for (int i = 2; i <= sqrt(x); ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
};
int Prime::countBetween(Prime &p)  //- подсчет количества простых чисел между установленным и переданным
{
	int start, end;
	if (val < p.val) {
		start = val;
		end = p.val;
	}else {
		end = val;
		start = p.val;
	}
	int count = 0;
	for (int i = start+1; i < end; ++i) 
		if (Prime::checkPrime(i)) 
			count++;
	
	return count;
	
};
Prime Prime::nextPrime()         //- возвращение простого числа, расположенного следом за установленным
{
	Prime next;
	next.val = 0;
	for (int i = val+1; i<INT_MAX; ++i) {
		if (Prime::checkPrime(i)) {
			next.val = i;
			break;
		}
	}
	return next;
};
int Prime::getValue()            //- возвращение установленного числа.
{
	return val;
};