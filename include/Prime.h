#define prime
#ifdef prime

class Prime{
public:
	int val = 0;

	void setValue(int x);     //- ���������� �����
	bool isValid();           //- ��������, ������������� �� ������������� ����� �������
	bool checkPrime(int x);   //- �������� ����������� ����� �� ��������
	int countBetween(Prime&); //- ������� ���������� ������� ����� ����� ������������� � ����������
	Prime nextPrime();        //- ����������� �������� �����, �������������� ������ �� �������������
	int getValue();           //- ����������� �������������� �����.

};
#endif // prime