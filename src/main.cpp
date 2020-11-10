#include<iostream>
#include <Windows.h>
#include "Prime.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Prime p;
	p.setValue(5);
	cout << "Создание и установка числа: " << p.getValue() << " " << p.isValid() << '\n';
	Prime num1, num2;
	num1.setValue(1);
	num2.setValue(12);
	cout << "Подсчет количества простых чисел между установленным и переданным: " << num1.countBetween(num2) << "\n";
	Prime num3 = num2.nextPrime();	
	cout << "Dозвращение простого числа, расположенного следом за установленным: " << num3.getValue() << " " << num3.isValid() << "\n";
	cout << "Проверьте является ли это число простым: " << num3.checkPrime(10) << "\n"; 
}