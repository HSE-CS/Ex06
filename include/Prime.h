#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

class Prime
{
public:
	void setValue(int); // ���������� �����
	bool isValid(); // ��������, ������������� �� ������������� ����� �������
	bool checkPrime(int); // �������� ����������� ����� �� ��������
	int countBetween(Prime&); // ������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime(); // ����������� �������� �����, �������������� ������ �� �������������
	int getValue(); // ����������� �������������� �����.

private:
	int num;
};




