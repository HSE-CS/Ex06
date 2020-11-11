#include"Prime.h"

int main() {

  Prime num1, num2;
  num1.setValue(2);
  num2 = num1.checkPrime();
  bool result = num1.checkPrime(17);
  num2.setValue(17);
  int count = num2.countBetween(num1);
  bool ans = num2.isValid();
  int prime1 = num1.getValue();
  int prime2 = num2.getValue();
  return 0;
}