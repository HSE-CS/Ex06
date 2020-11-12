/*
 * @author Stanislav Stoianov
 */

#include <iostream>
#include "../include/Prime.h"

int main() {
    Prime prime, prime2;
    prime.setValue(2);
    prime2.setValue(2);
    std::cout << prime.getValue() << " between " << prime2.getValue() << " distance " << prime.countBetween(prime2) << std::endl;
    prime.setValue(17);
    prime2.setValue(251);
    std::cout << prime.getValue() << " between " << prime2.getValue() << " distance " << prime.countBetween(prime2) << std::endl;

    std::cout << "Is 13 prime: " << Prime::checkPrime(13) << std::endl;
    std::cout << "Is 18 prime: " << Prime::checkPrime(18) << std::endl;

    std::cout << "Value: " << prime.getValue() << std::endl;
    std::cout << "Is valid: " << prime2.isValid() << std::endl;

    std::cout << "First 10 prime numbers:" << std::endl;
    for (int i = 0; i < 10; i++) {
        prime = prime.nextPrime();
        std::cout << prime.getValue() << " ";
    }
    return 0;
}