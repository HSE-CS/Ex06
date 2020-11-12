/*
 * @author Stanislav Stoianov
 */

#ifndef TASK_PRIME_H
#define TASK_PRIME_H

class Prime {
private:
    int integer = 0;
public:

    Prime() {

    }

    Prime(int integer) {
        this->integer = integer;
    }

    void setValue(int integer);

    int getValue() const;

    bool isValid() const;

    static bool checkPrime(int integer);

    int countBetween(Prime &prime) const;

    Prime nextPrime() const;

};

#endif