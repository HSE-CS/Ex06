#include "Prime.h"
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main()
{
    Prime num; //�������� �������� ������
	num.setValue(11); //������������� �����
	cout << num.getValue() << endl; // �������� ������������� �����
	cout << num.isValid() << endl; // �������� 1 - prime 0 - no
	int new_num = 4; //����� �����
	cout << num.testPrime(new_num) << endl; //��������� ���������� �����
	Prime num_test; // ������ ��� �����
	num_test.setValue(new_num); //������������� ����� � �����
	cout << num.countBetween(num_test) << endl; //������ ���������� ����� �����
	num_test = num_test.nextPrime(); //�������� �������� �������
	cout << num_test.getValue() << endl; //���������� ��������� �������
	cout << num.countBetween(num_test) << endl; //���������� ��������� ����������
	return 0;
}


