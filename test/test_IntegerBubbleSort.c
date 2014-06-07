#include "unity.h"
#include "IntegerBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_integercompare_given_3_and_3_should_return_0(void)
{
	int v1 = 3, v2 = 3;
	TEST_ASSERT_EQUAL(0,integerCompare(&v1,&v2));
	
}

void test_integercompare_given_2_and_3_should_return_neg_1(void)
{
	int v1 = 2, v2 = 3;
	TEST_ASSERT_EQUAL(-1,integerCompare(&v1,&v2));
	
}

void test_integercompare_given_3_and_2_should_return_1(void)
{
	int v1 = 3, v2 = 2;
	TEST_ASSERT_EQUAL(1,integerCompare(&v1,&v2));
	
}

void test_integerswap_given_3_and_2_should_return_2_3(void)
{
	int number[] = {3,2};
	int index1 = 0;
	int index2 = 1;
	integerSwap(number,&index1,&index2);
	TEST_ASSERT_EQUAL(2,number[0]);
	TEST_ASSERT_EQUAL(3,number[1]);
	
}