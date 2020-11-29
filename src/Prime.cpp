#include "../include/Prime.h"
#include <bits/stdc++.h>

Prime::Prime(){
	this->number = 0;
	this->is_valid = false;
}

Prime::Prime(int number){
	this->number = number;
	this->is_valid = this->checkPrime(number);
}

Prime::Prime(Prime &prime){
	this->number = prime.number;
	this->is_valid = prime.is_valid;
}

int Prime::getValue(){
	return number;
}

void Prime::setValue(int number){
	this->number = number;
	this->is_valid = this->checkPrime(number);
}

void Prime::incValue(int diff=1){
	this->setValue(this->getValue() + 1);
}

bool Prime::checkPrime(int number){
	bool is_prime;
	if(number > 1){
		int count = 0;
		for(int m = 1; m <= number; m++){
			if(number % m == 0){
				count += 1;
			}
		}
		is_prime = (count == 2) ? true : false;
	}
	else{
		is_prime = false;
	}
	return is_prime;
}

bool Prime::isValid(){
	return this->is_valid;
}

int Prime::countBetween(Prime &prime){
	int first = this->getValue();
	int second = prime.getValue();
	int min_num = std::min(first, second);
	int max_num = std::max(first, second);
	int count = 0;
	for(int num = (min_num + 1); num < max_num; num++){
		if(this->checkPrime(num)){
			count += 1;
		}
	}
	return count;
}
Prime Prime::nextPrime(){
	Prime next_prime(*this);
	next_prime.incValue();
	while(!next_prime.isValid()){
		next_prime.incValue();
	}
	return next_prime;
}
