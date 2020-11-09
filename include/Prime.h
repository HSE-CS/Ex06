class Prime
{
public:
    void setValue(int);
    int getValue();
    bool checkPrime(int);
    bool isValid();
    Prime nextPrime();
    void setNextPrime();
    int countBetween(Prime&);
private:
    int value;

};