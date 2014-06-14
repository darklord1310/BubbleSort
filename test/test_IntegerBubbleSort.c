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
	integerSwap(number,index1,index2);
	TEST_ASSERT_EQUAL(2,number[0]);
	TEST_ASSERT_EQUAL(3,number[1]);
	
}

void test_integerswap_given_4_and_8_should_return_8_4(void)
{
	int number[] = {4,8};
	int index1 = 0;
	int index2 = 1;
	integerSwap(number,index1,index2);
	TEST_ASSERT_EQUAL(8,number[0]);
	TEST_ASSERT_EQUAL(4,number[1]);
}

void test_singleintegerswap_given_3_and_0_should_return_0_3(void)
{
	int number[] = {3,0};
	singleintegerbubblesort(number,2,2);
	TEST_ASSERT_EQUAL(0,number[0]);
	TEST_ASSERT_EQUAL(3,number[1]);
}

void test_singleintegerswap_given_3_0_2_should_return_0_3_2(void)
{
	int number[] = {3,0,2};
	singleintegerbubblesort(number,3,3);
	TEST_ASSERT_EQUAL(0,number[0]);
	TEST_ASSERT_EQUAL(3,number[1]);
	TEST_ASSERT_EQUAL(2,number[2]);
}

void test_singleintegerswap_given_3_2_1_should_return_1_3_2(void)
{
	int number[] = {3,2,1};
	singleintegerbubblesort(number,3,3);
	TEST_ASSERT_EQUAL(1,number[0]);
	TEST_ASSERT_EQUAL(3,number[1]);
	TEST_ASSERT_EQUAL(2,number[2]);
}

void test_singleintegerswap_given_2_4_3_1_should_return_1_2_4_3(void)
{
	int number[] = {2,4,3,1};
	singleintegerbubblesort(number,4,4);
	TEST_ASSERT_EQUAL(1,number[0]);
	TEST_ASSERT_EQUAL(2,number[1]);
	TEST_ASSERT_EQUAL(4,number[2]);
	TEST_ASSERT_EQUAL(3,number[3]);
}

void test_integerbubblesort_given_2_1_should_return_1_2(void)
{
	int number[] = {2,1};
	integerbubblesort(number,2);
	TEST_ASSERT_EQUAL(1,number[0]);
	TEST_ASSERT_EQUAL(2,number[1]);

}

void test_integerbubblesort_given_66_33_11_should_return_11_33_66(void)
{
	int number[] = {66,33,11};
	integerbubblesort(number,3);
	TEST_ASSERT_EQUAL(11,number[0]);
	TEST_ASSERT_EQUAL(33,number[1]);
	TEST_ASSERT_EQUAL(66,number[2]);
}

void test_integerbubblesort_given_3_2_1_0_should_return_0_1_2_3(void)
{
	int number[] = {3,2,1,0};
	integerbubblesort(number,4);
	TEST_ASSERT_EQUAL(0,number[0]);
	TEST_ASSERT_EQUAL(1,number[1]);
	TEST_ASSERT_EQUAL(2,number[2]);
	TEST_ASSERT_EQUAL(3,number[3]);
}

void test_integerbubblesort_given_58_55_57_56_54_should_return_54_55_56_57_58(void)
{
	int number[] = {58,55,57,56,54};
	integerbubblesort(number,5);
	TEST_ASSERT_EQUAL(54,number[0]);
	TEST_ASSERT_EQUAL(55,number[1]);
	TEST_ASSERT_EQUAL(56,number[2]);
	TEST_ASSERT_EQUAL(57,number[3]);
	TEST_ASSERT_EQUAL(58,number[4]);
}

void test_integerbubbleSort_give_empty_should_do_nothing(void)
{
	int number[]= {3,2,1};
	integerbubblesort(number,0);
	TEST_ASSERT_EQUAL(3,number[0]);
	TEST_ASSERT_EQUAL(2,number[1]);
	TEST_ASSERT_EQUAL(1,number[2]);
	
}

void test_integerbubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void)
{
	int number[]= {3,2};
	integerbubblesort(number,1);
	TEST_ASSERT_EQUAL(3,number[0]);
	TEST_ASSERT_EQUAL(2,number[1]);
}