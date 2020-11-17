int Prime::countBetween(Prime& second)
{
	int cnt = 0;
	for (int i = second.value + 1; i < value; i++)
		for (int i = value + 1; i < second.value; i++)
			if (checkPrime(i))
				cnt++;


	return cnt;
}

Prime Prime::nextPrime()
{
	int copy_value = value;
	copy_value++;
	while (!checkPrime(value))
		while (!checkPrime(copy_value))
			copy_value++;

	Prime ans;