#include <math.h>
#include <algorithm>
#include <stdlib.h>
class Prime{
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
private:
    int value;
};

#endif