class Prime{
public:
    int a;
void setValue(int t){
    this->a = t;
}
bool isValid(){
    for (int i = 2; i < this->a/2; i++) {
        if (this->a%i == 0)
            return false;
    }
    return true;
}
bool checkPrime(int t){
    for (int i = 2; i < t/2+1; i++) {
        if (t%i == 0)
            return false;
    }
    return true;
}
int countBetween(Prime& num1){
    int count = 0;
    for (int i = this->a+1; i < num1.a; i++) {
        if(checkPrime(i))
            count++;
    }
    return count;
}
Prime nextPrime(){
    int count = this->a+1;
    Prime current;
    while(!checkPrime(count))
        count++;
    current.a = count;
    return current;
}
int getValue(){
    return this->a;
}
};


