#include"Prime.h"
#include<cmath>

void Prime::setValue(int x){
	val = x;
};
bool Prime::isValid(){           
	for (int i = 2; i <= sqrt(val); ++i) {
		if (val % i == 0) {
			return false;
		}
	}
	return true;
};
bool Prime::checkPrime(int x){
	for (int i = 2; i <= sqrt(x); ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
};
int Prime::countBetween(Prime &p){
	int start, end;
	if (val < p.val) {
		start = val;
		end = p.val;
	}else {
		end = val;
		start = p.val;
	}
	int count = 0;
	for (int i = start+1; i < end; ++i) 
		if (Prime::checkPrime(i)) 
			count++;
	
	return count;
	
};
Prime Prime::nextPrime(){
	Prime next;
	next.val = 0;
	for (int i = val+1; i<32000; ++i) {
		if (Prime::checkPrime(i)) {
			next.val = i;
			break;
		}
	}
	return next;
};
int Prime::getValue(){
	return val;
};