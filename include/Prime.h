#define prime
#ifdef prime

class Prime{
public:
	int val = 0;

	void setValue(int x);     //- установить число
	bool isValid();           //- проверка, действительно ли установленное число простое
	bool checkPrime(int x);   //- проверка переданного числа на простоту
	int countBetween(Prime&); //- подсчет количества простых чисел между установленным и переданным
	Prime nextPrime();        //- возвращение простого числа, расположенного следом за установленным
	int getValue();           //- возвращение установленного числа.

};
#endif // prime