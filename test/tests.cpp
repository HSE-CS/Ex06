TEST(ex06, test5)
{
	Prime num1, num2;
	num1.setValue(3)
		num2.setValue(13)
		num1.setValue(3);
	num2.setValue(13);
	int result = num1.countBetween(num2);
	EXPECT_EQ(3, result);
}