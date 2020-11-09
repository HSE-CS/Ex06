#pragma once 
#ifndef  PRIME_H
#define PRIME_H

class Prime {
private:
	int value;
	bool isPrime;
public:
	void setValue(int); //установить число
	bool isValid();  //проверка, действительно ли установленное число простое
	bool testPrime(int);  //проверка переданного числа на простоту
	int countBetween(Prime&);  //подсчет количества простых чисел между установленным и переданным
	Prime nextPrime();  //возвращение простого числа, расположенного следом за установленным
	int getValue();  //возвращение установленного числа  
};


#endif // ! PRIME_H