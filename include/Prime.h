#ifndef PRIME_H
#define PRIME_H
#include <iostream>

class Prime
{
private:
	int num1;
public:
	void setValue(int num); //- ���������� �����
	bool isValid(); //- ��������, ������������� �� ������������� ����� �������
	bool checkPrime(int num); //- �������� ����������� ����� �� ��������
	int countBetween(Prime& new_num);// - ������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime(); //- ����������� �������� �����, �������������� ������ �� �������������
	int getValue(); //- ����������� �������������� �����.
};

#endif
