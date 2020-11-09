#ifndef PRIME_H
#define PRIME_H
#include <iostream>
#include <cmath>

class Prime 
{
private:
		int number;
public:
    
	void setValue(int); //- ���������� �����
	
	bool isValid(); //- ��������, ������������� �� ������������� ����� �������
	bool checkPrime(int);// - �������� ����������� ����� �� ��������
	int countBetween(Prime&);// - ������� ���������� ������� ����� ����� ������������� � ����������
	
	Prime nextPrime();// - ����������� �������� �����, �������������� ������ �� �������������
	int getValue();// - ����������� �������������� �����.
};

#endif