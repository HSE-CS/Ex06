#ifndef PRIME_H
#define PRIME_H

class Prime {
public:
	void setValue(int);
	bool isValid() const;
	bool checkPrime(int) const;
	int countBetween(Prime&) const;
	Prime nextPrime() const;
	int getValue() const;
private:
	int number;

};

#endif