#include <typeinfo>
#include <cstring>
#include <iostream>
using namespace std;
class Prime
{
private:
    int number;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();

};