//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task3_h
#define task3_h

#include <iostream>
#include <string.h>

class Prime{
private:
    int local_prime;
    bool isPrime(int);
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};

#endif /* task1_hpp */
