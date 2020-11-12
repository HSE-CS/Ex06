#ifndef PRIME_H
#define PRIME_H
#include <iostream>

class Prime
{
private:
	int num1;
public:
	void setValue(int num); //- установить число
	bool isValid(); //- проверка, действительно ли установленное число простое
	bool checkPrime(int num); //- проверка переданного числа на простоту
	int countBetween(Prime& new_num);// - подсчет количества простых чисел между установленным и переданным
	Prime nextPrime(); //- возвращение простого числа, расположенного следом за установленным
	int getValue(); //- возвращение установленного числа.
};

#endif
