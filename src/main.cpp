#include "Prime.h"

using namespace std;

int main() {

	Prime num1, num2;

    num1.setValue(2);
    cout << num1.getValue() << endl;

    num2 = num1.nextPrime(); // � num2 ��������������� 3
    cout << num2.getValue() << endl;

    bool result = num1.checkPrime(17); // true
    cout << result << endl;

    num2.setValue(17);     // � num2 ������������� 17

    int count = num2.countBetween(num1); // count=5
    
    bool ans = num2.isValid();        // true
    cout << ans << endl;

	return 0;
}