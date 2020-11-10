#ifndef _PRIME_H
#define _PRIME_H

class Prime
{
private:
	int num;
public:
	void setValue(int); // -���������� �����
	bool isValid(); //- ��������, ������������� �� ������������� ����� �������
	bool checkPrime(int); // -�������� ����������� ����� �� ��������
	int countBetween(Prime&); // -������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime(); // -����������� �������� �����, �������������� ������ �� �������������
	int getValue(); // -����������� �������������� �����.
};
#endif // !PRIME_H
