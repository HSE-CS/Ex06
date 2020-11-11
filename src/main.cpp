//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "Prime.h"
#include <iostream>
//#include <stdlib>

int main() {
    Prime num1,num2;
    
    num1.setValue(2);
    std::cout << num1.getValue() << " || 2" << "\n";
    
    num2=num1.nextPrime();          // в num2 устанавливается 3
    std::cout << num2.getValue() << " || 3" << "\n";
    
    bool result=num1.checkPrime(17); // true
    std::cout << result << " || true" << "\n";
    
    num2.setValue(17);              // в num2 устанавливаем 17
    int count=num1.countBetween(num2); // count=5
    std::cout << count << " || 5" << "\n";
    
    result =num2.isValid();
    std::cout << result << " || true" << "\n";
}

