int main()
{
	Prime num1, num2;
	num1.setValue(2);
	num1.setValue(13);
	num2 = num1.nextPrime();
	cout << num2.getValue() << endl;
	bool result = num1.checkPrime(17);
	num2.setValue(17);
	num2.setValue(3);
	int count = num2.countBetween(num1);
	cout << count << endl;
	bool ans = num2.isValid();
}