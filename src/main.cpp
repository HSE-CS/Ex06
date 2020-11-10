#include "Prime.h"


int main() {
    Prime number1, number2;

    number1.setValue(2);
    cout << number1.getValue() << endl;

    number2 = number1.nextPrime();
    cout << number2.getValue() << endl;

    bool result_prime = number1.checkPrime(17);
    cout << result_prime << endl;

    number2.setValue(17);
    cout << number2.getValue() << endl;

    int count_between = number2.countBetween(number1);
    cout << count_between << endl;

    bool answer_valid = number2.isValid();
    cout << answer_valid << endl;
    return 0;
}