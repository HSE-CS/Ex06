#include "Prime.h"
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main()
{
    Prime num; //Создание элемента класса
	num.setValue(11); //Устанавливаем число
	cout << num.getValue() << endl; // Печатаем установленное число
	cout << num.isValid() << endl; // Печатаем 1 - prime 0 - no
	int new_num = 4; //Новое число
	cout << num.testPrime(new_num) << endl; //Проверяем переданное число
	Prime num_test; // Создаём ещё число
	num_test.setValue(new_num); //Устанавливаем число в число
	cout << num.countBetween(num_test) << endl; //Смотри количество чисел между
	num_test = num_test.nextPrime(); //Вызываем следющее простое
	cout << num_test.getValue() << endl; //Показываем слудеющее простое
	cout << num.countBetween(num_test) << endl; //Показываем изменённое количество
	return 0;
}


