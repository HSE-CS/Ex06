#ifndef _PRIME_H_
#define _PRIME_H_

class Prime
{
private:
	int n;
public:
	void setValue(int); //���������� �����
	bool isValid(); //��������, ������������� �� ������������� ����� �������
	bool checkPrime(int); //�������� ����������� ����� �� ��������
	int countBetween(Prime&); //������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime(); //����������� �������� �����, �������������� ������ �� �������������
	int getValue(); //����������� �������������� �����.
};
#endif
