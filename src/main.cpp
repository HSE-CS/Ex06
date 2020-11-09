#include "Prime.h"
#include <iostream>


int main()
{
    Prime num1, num2;
    num1.setValue(2);
    std::cout << num1.getValue();
    std::cout << "      num1\n";

    num2 = num1.nextPrime();          // в num2 устанавливается 3
    std::cout << num2.getValue();
    std::cout << "      next prime \n";

    bool result = num1.testPrime(17); // true
    std::cout << result;
    std::cout << "      - 1-true, 0-false for num1\n";

    num2.setValue(17);              // в num2 устанавливаем 17
    std::cout << num2.getValue();
    std::cout << "      num2\n";

    int count = num1.countBetween(num2); // count=5
    std::cout << count;
    std::cout << "      counter between num1 and num2\n";

    bool ans = num2.isValid();        // true
    std::cout << ans;
    std::cout << " \n";
    return 0;
}