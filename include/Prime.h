#ifndef PRIME_H
#define PRIME_H
class Prime{
private:
    int inner;  
public:
    void setValue(int v);
    bool isValid();
    bool checkPrime(int p);
    int countBetween(Prime& p);
    Prime nextPrime();
    int getValue();
};
#endif