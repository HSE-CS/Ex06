class Prime {
private:
	int num;
public:
	void setValue(int x);
	bool isValid();
	bool checkPrime(int x);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
}