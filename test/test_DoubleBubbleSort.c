#include "unity.h"
#include "DoubleBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_doublecompare_given_4p0_and_4p0_should_return_0(void)
{
	double v1 = 4.0, v2 = 4.0;
	TEST_ASSERT_EQUAL(0,doubleCompare(&v1,&v2));
	
}

void test_doublecompare_given_4p1_and_4p2_should_return_neg_1(void)
{
	double v1 = 4.1, v2 = 4.2;
	TEST_ASSERT_EQUAL(-1,doubleCompare(&v1,&v2));
	
}

void test_doublecompare_given_5p5_and_2p3_should_return_1(void)
{
	double v1 = 5.5, v2 = 2.3;
	TEST_ASSERT_EQUAL(1,doubleCompare(&v1,&v2));
	
}

void test_doubleswap_given_3p0_and_1p7_should_return_1p7_3p0(void)
{
	double number[] = {3.0,1.7};
	int index1 = 0;
	int index2 = 1;
	doubleSwap(number,&index1,&index2);
	TEST_ASSERT_EQUAL(1.7,number[0]);
	TEST_ASSERT_EQUAL(3.0,number[1]);
}

void test_doubleswap_given_4p1_and_7p8_should_return_7p8_4p1(void)
{
	double number[] = {4.1,7.8};
	int index1 = 0;
	int index2 = 1;
	doubleSwap(number,&index1,&index2);
	TEST_ASSERT_EQUAL(7.8,number[0]);
	TEST_ASSERT_EQUAL(4.1,number[1]);
}