#include "Prime.h"

void Prime::setValue(int num) //- ���������� �����
	{
	number = num;
	} 


bool Prime::isValid() //- ��������, ������������� �� ������������� ����� �������
{ 
	for (int i = 2; i <= sqrt(number); i++)
		if (number % i == 0)
			return false;
	return true;

} 

bool Prime::checkPrime(int num)// - �������� ����������� ����� �� ��������
	{
		for (int i = 2; i <= sqrt(num); i++)
			if (num % i == 0)
				return false;
		return true;
	}
int Prime::countBetween(Prime& num2)// - ������� ���������� ������� ����� ����� ������������� � ����������
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
Prime Prime::nextPrime()// - ����������� �������� �����, �������������� ������ �� �������������
{
	Prime nvalue;
	int n = number;
	while (!checkPrime(n)) {
		n++;
	}
	nvalue.number = n;
	return nvalue;
}
		
int Prime::getValue()// - ����������� �������������� �����.
	{
	return number;
	}
