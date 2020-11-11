#ifndef PRIME_H
#define PRIME_H

class Prime
{
private:
	unsigned int prime;
public:
	void setValue(int);		  //- ���������� �����
	bool isValid();			  //- ��������, ������������� �� ������������� ����� �������
	bool checkPrime(int);	  //- �������� ����������� ����� �� ��������
	int countBetween(Prime&); //- ������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime();		  //- ����������� �������� �����, �������������� ������ �� �������������
	int getValue();			  //- ����������� �������������� �����.
};

#endif
