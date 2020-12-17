#ifndef TASK1_TASK1
#define TASK1_TASK1

class Prime{
private:
    int value;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};

#endif 