#include "Prime.h"
#include <iostream>
int main()
{
    Prime pr_1,pr_2;

    pr_1.setValue(5); // set 5 in pr_1
    int val = pr_1.getValue(); // val = 5
    std::cout << val << "\n";

    pr_2 = pr_1.nextPrime(); // set 7 in pr_2
    val = pr_2.getValue(); // val = 7
    std::cout << val << "\n";

    bool result = pr_1.isValid(); // true, because 5 is prime
    std::cout << result << "\n";

    result = pr_1.checkPrime(28); //false, because 28 isn't prime
    std::cout << result << "\n";

    pr_1.setValue(71); // set 71 in pr_1
    pr_2.setValue(89); // set 89 in pr_2

    int c = pr_1.countBetween(pr_2); // count = 3
    std::cout << c << "\n";
    return 0;
}
