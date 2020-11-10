#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

class Prime
{
public:
	void setValue(int); // установить число
	bool isValid(); // проверка, действительно ли установленное число простое
	bool checkPrime(int); // проверка переданного числа на простоту
	int countBetween(Prime&); // подсчет количества простых чисел между установленным и переданным
	Prime nextPrime(); // возвращение простого числа, расположенного следом за установленным
	int getValue(); // возвращение установленного числа.

private:
	int num;
};




