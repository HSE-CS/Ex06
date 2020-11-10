//
// Created by stoja on 10.11.2020.
//
#include <iostream>
#include "Prime.h"
using namespace std;
int main(){
   Prime hz = Prime();
   Prime hz2 = Prime();
   hz2.setValue(23);
   hz.setValue(7);
   cout<<hz.getValue()<<"\n";
   cout<<hz.isValid()<<"\n";
   cout<<hz.countBetween(hz2)<<"\n";
   cout<<hz.nextPrime().getValue();




    return 0;
}