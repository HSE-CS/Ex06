#include "../include/Prime.h"

void Prime::setValue(int num) { this->num = num; }

int Prime::getValue() { return num; }


bool Prime::isValid() {
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

bool Prime::checkPrime(int num) {
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}


Prime Prime::nextPrime() {
  int val = num + 1;
  while (!checkPrime(val)) {
    ++val;
  }
  Prime next_prime;
  next_prime.num = val;
  return next_prime;
}

int Prime::countBetween(Prime &prime) {
  int begin = this->num + 1;
  int end = prime.num - 1;
  int count = 0;
  for (int i = begin; i <= end; ++i) {
    if (checkPrime(i)) {
      ++count;
    }
  }
  return count;
}