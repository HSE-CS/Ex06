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
     bool ans = true;
     for (int i = 2; i <= sqrt(a); i++) {
         if (a % i == 0) {
             ans= false;
         }
     }  
     return ans;
}

 int Prime::countBetween(Prime& num2) {
     int count = 0;
     for (int i = value + 1; i < num2.value; i++)
     {
         if (checkPrime(i)) {
             count++;
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