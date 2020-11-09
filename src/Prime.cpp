#include "Prime.h"
#include <iostream>
#include<math.h>

using namespace std;

void Prime::setValue(int a){
    value = a;
}

bool Prime::isValid(){
    return checkPrime(value);
}

 bool Prime::checkPrime(int a){
     for (int i = 2; i <= sqrt(a); i++) {
         if (a % i == 0) {
             return false;
         }
         return true;
     }  
}

 int Prime::countBetween(Prime&a) {
     int s = 0;
     if (a.value > value) {
         for (int i = value + 1; i < a.value; i++) {
             if (checkPrime(i)==true){
                 s = s + 1;
             }
         }
     }
     else {
         for (int i = a.value + 1; i < value; i++) {
             if (checkPrime(i) == true) {
                 s = s + 1;
             }
         }
         return s;
     }

 }

 Prime Prime::nextPrime() {
     Prime neww;
     int n=getValue()+1;
     while (!checkPrime(n)) {
         n = n + 1;
     }
     neww.setValue(n);
     return neww;
  
 }

 int Prime::getValue() {
     return value;
 }