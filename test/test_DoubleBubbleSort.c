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
	double number[] = {3.0 , 1.7};
	int index1 = 0;
	int index2 = 1;
	doubleSwap(number,index1,index2);
	TEST_ASSERT_EQUAL(1.7,number[0]);
	TEST_ASSERT_EQUAL(3.0,number[1]);
}

void test_doubleswap_given_4p1_and_7p8_should_return_7p8_4p1(void)
{
	double number[] = {4.1,7.8};
	int index1 = 0;
	int index2 = 1;
	doubleSwap(number,index1,index2);
	TEST_ASSERT_EQUAL(7.8,number[0]);
	TEST_ASSERT_EQUAL(4.1,number[1]);
}

void test_singledoublebubblesort_given_9p8_and_3p1_should_return_3p1_9p8(void)
{
	double number[] = {9.8,3.1};
	singledoublebubblesort(number,2,2);
	TEST_ASSERT_EQUAL(3.1,number[0]);
	TEST_ASSERT_EQUAL(9.8,number[1]);
}

void test_singledoublebubblesort_given_3p2_3p1_4p0_should_return_3p1_3p2_4p0(void)
{
	double number[] = {3.2,3.1,4.0};
	singledoublebubblesort(number,3,3);
	TEST_ASSERT_EQUAL(3.1,number[0]);
	TEST_ASSERT_EQUAL(3.2,number[1]);
	TEST_ASSERT_EQUAL(4.0,number[2]);
}

void test_singledoublebubblesort_given_3p1_2p1_1p1_should_return_1p1_3p1_2p1(void)
{
	double number[] = {3.1,2.1,1.1};
	singledoublebubblesort(number,3,3);
	TEST_ASSERT_EQUAL(1.1,number[0]);
	TEST_ASSERT_EQUAL(3.1,number[1]);
	TEST_ASSERT_EQUAL(2.1,number[2]);
}

void test_singledoublebubblesort_given_0p1_2p2_1p2_0p7_should_return_0p1_0p7_2p2_1p2(void)
{
	double number[] = {0.1,2.2,1.2,0.7};
	singledoublebubblesort(number,4,4);
	TEST_ASSERT_EQUAL(0.1,number[0]);
	TEST_ASSERT_EQUAL(0.7,number[1]);
	TEST_ASSERT_EQUAL(2.2,number[2]);
	TEST_ASSERT_EQUAL(1.2,number[3]);
}

void test_doublebubbblesort_given_0p9_0p1_should_return_0p1_0p9(void)
{
	double number[] = {0.1,0.9};
	doublebubblesort(number,2);
	TEST_ASSERT_EQUAL(0.1,number[0]);
	TEST_ASSERT_EQUAL(0.9,number[1]);

}

void test_doublebubbblesort_given_0p9_0p1_0p0_should_return_0p0_0p9_0p1(void)
{
	double number[] = {0.9,0.1,0.0};
	doublebubblesort(number,3);
	TEST_ASSERT_EQUAL(0.0,number[0]);
	TEST_ASSERT_EQUAL(0.9,number[1]);
	TEST_ASSERT_EQUAL(0.1,number[2]);

}

void test_doublebubbblesort_given_5p2_4p2_3p2_2p2_should_return_2p2_3p2_4p2_5p2(void)
{
	double number[] = {5.2,4.2,3.2,2.2};
	doublebubblesort(number,4);
	TEST_ASSERT_EQUAL(2.2,number[0]);
	TEST_ASSERT_EQUAL(3.2,number[1]);
	TEST_ASSERT_EQUAL(4.2,number[2]);
	TEST_ASSERT_EQUAL(5.2,number[3]);
}


void test_doublebubbblesort_given_0p2_0p1_0p5_0p4_1p8_should_return_0p1_0p2_0p4_0p5_1p8(void)
{
	double number[] = {0.2,0.1,0.5,0.4,1.8};
	doublebubblesort(number,5);
	TEST_ASSERT_EQUAL(0.1,number[0]);
	TEST_ASSERT_EQUAL(0.2,number[1]);
	TEST_ASSERT_EQUAL(0.4,number[2]);
	TEST_ASSERT_EQUAL(0.5,number[3]);
	TEST_ASSERT_EQUAL(1.8,number[4]);
}

void test_doublebubbleSort_give_empty_should_do_nothing(void)
{
	double number[]= {3.0,2.0,1.1};
	doublebubblesort(number,0);
	TEST_ASSERT_EQUAL(3.0,number[0]);
	TEST_ASSERT_EQUAL(2.0,number[1]);
	TEST_ASSERT_EQUAL(1.1,number[2]);
}

void test_doublebubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void)
{
	double number[]= {3.3,2.2};
	doublebubblesort(number,1);
	TEST_ASSERT_EQUAL(3.3,number[0]);
	TEST_ASSERT_EQUAL(2.2,number[1]);
}