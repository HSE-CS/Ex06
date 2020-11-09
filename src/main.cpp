#include "Prime.h"

int main()
{
	Prime num1, num2;//создание объекта класса
	num1.setValue(2);//сохранение значения в объект класса
	cout<<"getValue: "<<num1.getValue()<<endl;
	
	num2 = num1.nextPrime();// возвращение простого числа, расположенного следом за установленным
	cout <<"nextPrime: "<< num2.getValue() << endl;

	bool result = num1.checkPrime(17); // проверка переданного числа на простоту
	cout <<"checkPrime: "<< result << endl;

	num2.setValue(17);//устанавливаем число
	int count = num2.countBetween(num1);//подсчет количества простых чисел между установленным и переданным
	cout <<"countBetween: "<< count << endl;

	bool ans = num2.isValid();//проверка, что число простое
	cout <<"isValid: "<< ans << endl;
	return 0;
}