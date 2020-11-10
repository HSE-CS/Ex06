#include "Prime.h"

using namespace std;

void Prime::setValue(int value)
{
	this->num = value;
}

bool Prime::isValid()
{
	if (checkPrime(this->num)) {
		return true;
	}
	return false;
}

bool Prime::checkPrime(int value)
{
	vector <int> prime_numbers;
	vector <int> sequence(value + 1);

	for (auto i = 0; i < value + 1; i++) {
		sequence[i] = i;
	}

	sequence[1] = 0;

	auto i = 2;

	while (i <= value) {
		if (sequence[i] != 0) {
			prime_numbers.push_back(sequence[i]);

			for (auto j = i; j < value + 1; j += i) {
				sequence[j] = 0;
			}
		}

		i += 1;
	}

	for (auto elem : prime_numbers) {
		if (elem == value) {

			return true;
		}
	}

	return false;

}

int Prime::countBetween(Prime& number)
{
	int left, right, count = 0;

	left = min(this->num, number.getValue()) + 1;
	right = max(this->num, number.getValue());

	while (left < right){
		if (checkPrime(left)) {
			count++;
		}

		left++;
	}

	return count;
}

Prime Prime::nextPrime()
{
	auto number = this->num;

	while (true) {

		number++;

		if (checkPrime(number)) {
			Prime num;
			num.setValue(number);
			return num;
		}
	}
	
}

int Prime::getValue()
{
	return this->num;
}
