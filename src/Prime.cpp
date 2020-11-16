#include "Prime.h"

using namespace std;

vector<int> Prime::createPrimesVector(int numTo) {
    vector<int> primes;
    bool isPrime;
    for (int i = 2; i <= numTo; i++) {
        isPrime = true;
        for (int prime : primes) {
            if (i % prime == 0)
                isPrime = false;
        }
        if (isPrime)
            primes.push_back(i);
    }
    return primes;
}

void Prime::setValue(int value) {
    this->value = value;
}

bool Prime::isValid() const {
    if (value < 2)
        return false;
    else if (value == 2)
        return true;
    for (int i = 2; i < sqrt(value); i++) {
        if (value % i == 0)
            return false;
    }
    return true;
}

bool Prime::checkPrime(int value) {
    Prime prime;
    prime.setValue(value);
    return prime.isValid();
}

int Prime::countBetween(Prime &prime) {
    int counter = 0;
    vector <int> v = createPrimesVector(max(prime.getValue(), value) - 1);
    for (int num : v)
        if (num > min(prime.getValue(), value))
            counter++;
    return counter;
}

Prime Prime::nextPrime() {
    vector<int> v = createPrimesVector(value);
    bool isPrime;
    for (int i = value + 1; ; i++) {
        isPrime = true;
        for (int prime : v)
            if (i % prime == 0) {
                isPrime = false;
                break;
            }
        if (isPrime) {
            Prime num;
            num.setValue(i);
            return num;
        }
    }
}

int Prime::getValue() const {
    return value;
}
