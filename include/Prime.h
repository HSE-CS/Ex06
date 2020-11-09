class Prime
{
  private:
    unsigned long long value;
  public:
    void setValue(int);
	  bool isValid();
	  bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};
