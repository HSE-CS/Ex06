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
#include <cstdlib>

void Prime::setValue(int v){
    this->local_prime = v;
}

bool Prime::checkPrime(int v){
    int value = v;
    for (int delimetr = 2; delimetr < value; delimetr++){
        if (value % delimetr == 0)
            return false;
    }
    return true;
}

bool Prime::isValid(){
    return this->checkPrime(this->local_prime);
}

int Prime::getValue(){
    return this->local_prime;
}
    
Prime Prime::nextPrime(){
    int start_prime = this->local_prime;
    while(!checkPrime(++start_prime));
    Prime *new_prime = new Prime();
    new_prime->setValue(start_prime);
    return *new_prime;
}
// 1 3 5 7 11 13 17

int Prime::countBetween(Prime &second_prime){
    int num_of_prime = 0;
    Prime current_prime = this->nextPrime();
    
    while(current_prime.getValue() < second_prime.getValue()){
       
//        if (current_prime.getValue() >= second_prime.getValue())
//            break;
        num_of_prime++;
        current_prime = current_prime.nextPrime();
    };
    
    return num_of_prime;
}
