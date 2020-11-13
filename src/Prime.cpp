#include "Prime.h"
#include <iostream>
#include<math.h>

using namespace std;

void Prime::setValue(int a){
    value = a;
}

bool Prime::isValid(){
    for (int i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
        
    }
    return true;
}

 bool Prime::checkPrime(int a){
     for (int i = 2; i <= sqrt(a); i++) {
         if (a % i == 0) {
             return false;
         }
     }  
     return true;
}

 int Prime::countBetween(Prime& num2) {
     int count = 0;
     for (int i = value+1; i < num2.value; i++) {
         for (int i = num2.value + 1; i < value; i++) {
             if (checkPrime(i)) {
                 count = count + 1;
             }
         }
     }
     return count;
 }

 Prime Prime::nextPrime() {
     Prime neww;
     for (int i = value + 1;; i++) {
         if (checkPrime(i) == 1)
         {
             neww.value = i;
             return neww;
         }
     }
     return neww;
  
 }

 int Prime::getValue() {
     return value;
 }