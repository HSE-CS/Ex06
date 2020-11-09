class Prime {
public:
    void setValue(int);
    int getValue();
    bool checkPrime(int);
    bool isValid();
    Prime nextPrime();
    int countBetween(Prime &);
private:
    int value;
};
