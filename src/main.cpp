//
// Created by Данил on 21.11.2020.
//


#include "../include/Prime.h"


int main() {
    Prime numberOne{};
    Prime numberTwo{};
    Prime modulo{};

    modulo.setValue(1e9 + 7);

    std::cout << modulo.getValue() << '\n';
    std::cout << modulo.isValid() << '\n';

    numberOne.setValue(7);
    numberTwo.setValue(31);

    std::cout << numberOne.nextPrime().getValue() << '\n';

    std::cout << numberOne.countBetween(numberTwo) << '\n';


    return 0;
}
