#include "unity.h"
#include "CharSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_charcompare_given_v1_larger_than_v2_should_return_1(void)
{
	char v1[] = "I am superman" , v2[] = "I am batman";
	TEST_ASSERT_EQUAL(1,charCompare(&v1,&v2));
	
}

void test_charcompare_given_v1_and_v2_equal_should_return_0(void)
{
	char v1[] = "Superman", v2[] = "Superman";
	TEST_ASSERT_EQUAL(0,charCompare(&v1,&v2));
	
}

void test_charcompare_given_v1_smaller_than_v2_should_return_neg_1(void)
{
	char v1[] = "ali", v2[] = "alive";
	TEST_ASSERT_EQUAL(-1,charCompare(&v1,&v2));
	
}




