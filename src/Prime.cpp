#include "Prime.h"
#include "math.h"

bool CheckPrime(int x) {
    for (int i = 2; i < x; i++) { if (!(x % i)) return false; }
    return true;
}


void Prime::setValue(int x) { prime = x; }

bool Prime::isValid() { return CheckPrime(prime); }

bool Prime::checkPrime(int x) { return CheckPrime(x); }

int Prime::countBetween(Prime &x) {
    int pmax, pmin, count = 0;
    if (prime > x.prime) { pmax=prime; pmin=x.prime; }
    else { pmax=x.prime; pmin=prime; }

    for(int i=pmin;i<pmax;i++) if (checkPrime(i)) count++;
    return count;
}

Prime Prime::nextPrime() {
    Prime nextPrime;

    for (int i=prime+1;;i++) {
        if (checkPrime(i)) {
            nextPrime.prime=i;
            return nextPrime;
        }
    }
}

int Prime::getValue() { return prime; }