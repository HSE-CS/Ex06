int Prime::countBetween(Prime& x) {
	int c = 0;
	if (value < x.value) {
		for (int i = value; i < x.value; ++i) {
			for (int i = value + 1; i < x.value; ++i) {
				if (Prime::checkPrime(i)) { c++; }
			}
		}
	else if (x.value < value) {
		for (int i = x.value; i < value; ++i) {
			for (int i = x.value + 1; i < value; ++i) {
				if (Prime::checkPrime(i)) { c++; }
			}
		}
	}
	}
}