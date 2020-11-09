class Prime {
    private:
        int val;
    public:
        void setValue(int v);
        bool isValid();
        bool checkPrime(int v);
        int countBetween(Prime& pNum);
        Prime nextPrime();
        int getValue();
};

