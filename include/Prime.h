
class Prime
{
private:
    unsigned int prime;
public:
    void setValue(int);        // числу устнаваливается заданное значение
    bool isValid();            // число проверяется на простоту
    bool checkPrime(int);      // переданное число проверяется на простоту
    int countBetween(Prime&);  // кол-во простых чисел между установленным и переданным
    Prime nextPrime();         // простое число, следующее за установленным
    int getValue();            // возвращает установленное число
};
