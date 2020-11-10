#include <iostream>
#include "Prime.h"
int main()
{
    Prime a, b;
    std::cout << "First 120 prime numbers:" << std::endl;
    for (int i = 0; i < 120; i++)
    {
        a = a.nextPrime();
        std::cout << a.getValue() << " ";
    }
    std::cout << "\n\n";

    std::cout << "Count of prime numbers between:\n";

    a.setValue(2);
    b.setValue(2);
    std::cout << a.getValue() << " <--> " << b.getValue() << " = " << a.countBetween(b) << std::endl;
    a.setValue(2);
    b.setValue(3);
    std::cout << a.getValue() << " <--> " << b.getValue() << " = " << a.countBetween(b) << std::endl;
    a.setValue(2);
    b.setValue(17);
    std::cout << a.getValue() << " <--> " << b.getValue() << " = " << a.countBetween(b) << std::endl;
    a.setValue(17);
    b.setValue(2);
    std::cout << a.getValue() << " <--> " << b.getValue() << " = " << a.countBetween(b) << std::endl;
    a.setValue(0);
    b.setValue(660);
    std::cout << a.getValue() << " <--> " << b.getValue() << " = " << a.countBetween(b) << std::endl;
    return 0;
}
