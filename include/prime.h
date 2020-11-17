


class Prime {
private:
	int val;
public:
	explicit Prime(int v = 0) { setValue(v); };
	void setValue(int);
	bool isValid() const;
	bool checkPrime(int) const;
	int countBetween(Prime&) const;
	Prime nextPrime() const;
	int getValue() const;
};

