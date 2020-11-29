#ifndef PRIME_H_
#define PRIME_H_

class Prime{
private:
	int number;
	bool is_valid;
public:
	Prime();
	Prime(int number);
	Prime(Prime &prime);
	int getValue();
	void setValue(int number);
	void incValue(int diff);
	bool checkPrime(int number);
	bool isValid();
	int countBetween(Prime &prime);
	Prime nextPrime();
};



#endif /* PRIME_H_ */
