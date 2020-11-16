#ifndef EX_06_PRIME_H
#define EX_06_PRIME_H
#include <vector>
#include <math.h>
using namespace std;
class Prime {
private:
    int value;
    vector<int> createPrimesVector(int);
public:
    void setValue(int);
    bool isValid() const;
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue() const;
};
#endif
