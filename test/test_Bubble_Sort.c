#include "unity.h"
#include "Bubble_Sort.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_swap_should_swap_the_2_values(void)
{
	int array[]= {2,3};
	swap(array,0,1);
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	
}

void test_single_bubble_sort_should_should_sort_to_3_1(void)
{
	int array[]= {3,1};
	singlebubblesort(array,2,2);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(3,array[1]);
	
}

void test_single_bubble_sort_should_should_sort_neg_3_1_4(void)
{
	int array[]= {1,4,-3};
	singlebubblesort(array,3,3);
	TEST_ASSERT_EQUAL(-3,array[0]);
	TEST_ASSERT_EQUAL( 1,array[1]);
	TEST_ASSERT_EQUAL( 4,array[2]);
}

void test_single_bubble_sort_should_should_sort_0_6_5_1(void)
{
	int array[]= {6,5,1,0};
	singlebubblesort(array,4,4);
	TEST_ASSERT_EQUAL( 0,array[0]);
	TEST_ASSERT_EQUAL( 6,array[1]);
	TEST_ASSERT_EQUAL( 5,array[2]);
	TEST_ASSERT_EQUAL( 1,array[3]);
}

void test_single_bubble_sort_should_should_sort_neg_2_0_3_4_90(void)
{
	int array[]= {0,3,-2,4,90};
	singlebubblesort(array,5,5);
	TEST_ASSERT_EQUAL(-2,array[0]);
	TEST_ASSERT_EQUAL( 0,array[1]);
	TEST_ASSERT_EQUAL( 3,array[2]);
	TEST_ASSERT_EQUAL( 4,array[3]);
	TEST_ASSERT_EQUAL( 90,array[4]);
}

void test_bubbleSort_should_sort_to_1_8(void)
{
	int array[]= {8,1};
	bubblesort(array,2);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(8,array[1]);

}

void test_bubbleSort_should_sort_to_1_2_3(void)
{
	int array[]= {3,2,1};
	bubblesort(array,3);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(3,array[2]);
}

void test_bubbleSort_should_sort_to_neg_3_1_2_3(void)
{
	int array[]= {3,2,1,-3};
	bubblesort(array,4);
	TEST_ASSERT_EQUAL(-3,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
	TEST_ASSERT_EQUAL(2,array[2]);
	TEST_ASSERT_EQUAL(3,array[3]);
}

void test_bubbleSort_should_sort_to_neg_3_0_1_2_3(void)
{
	int array[]= {3,2,1,-3,0};
	bubblesort(array,5);
	TEST_ASSERT_EQUAL(-3,array[0]);
	TEST_ASSERT_EQUAL(0,array[1]);
	TEST_ASSERT_EQUAL(1,array[2]);
	TEST_ASSERT_EQUAL(2,array[3]);
	TEST_ASSERT_EQUAL(3,array[4]);
}

void test_bubbleSort_give_empty_should_do_nothing(void)
{
	int array[]= {3,2,1};
	bubblesort(array,0);
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(1,array[2]);
	
}

void test_bubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void)
{
	int array[]= {3,2};
	bubblesort(array,1);
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	
}
