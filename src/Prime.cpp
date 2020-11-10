#include "Prime.h"

void Prime::setValue(int input) { // ���������� �����
	num1 = input;
}
bool Prime::isValid(){ // ��������, ������������� �� ������������� ����� �������
	for (int i = 2; i < num1; i++) {
		if (num1 % i == 0) {
			return false;
		}
	}
	return true;
}
bool Prime::checkPrime(int input) { // �������� ����������� ����� �� ��������
	for (int i = 2; i < input; i++) {
		if (input % i == 0) {
			return false;
		}
	}
	return true;
}
int Prime::countBetween(Prime& num2) { // ������� ���������� ������� ����� ����� ������������� � ����������
	int count = 0;
	if (num2.getValue() > num1) {
		for (int i = num1 + 1; i < num2.getValue(); i++) {
			int k = 0;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					k++;
				}
			}
			if (k == 0) {
				count++;
			}
		}
	}
	else {
		for (int i = num2.getValue() + 1; i < num1; i++) {
			int k = 0;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					k++;
				}
			}
			if (k == 0) {
				count++;
			}
		}
	}
	return count;
}
Prime Prime::nextPrime() { // ����������� �������� �����, �������������� ������ �� �������������
	Prime number_next;
	number_next.setValue(0);
	int i = num1+ 1;

	while (number_next.getValue() == 0) {
		int k = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				k++;
			}
		}
		if (k == 0) {
			number_next.setValue(i);
		}
		else {
			i++;
		}
	}
	return number_next;
}
int Prime::getValue() { // ����������� �������������� �����.
	return num1;
}
