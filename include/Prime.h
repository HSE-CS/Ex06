<<<<<<< HEAD
#pragma once
=======
#pragma once 
>>>>>>> 04c0b9a8b0b31ebbc3e33ab8d4b32e9d6b946427
#ifndef  PRIME_H
#define PRIME_H

class Prime {
private:
	int value;
	bool isPrime;
public:
	void setValue(int); //���������� �����
	bool isValid();  //��������, ������������� �� ������������� ����� �������
	bool testPrime(int);  //�������� ����������� ����� �� ��������
	int countBetween(Prime&);  //������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime();  //����������� �������� �����, �������������� ������ �� �������������
	int getValue();  //����������� �������������� �����  
};


#endif // ! PRIME_H