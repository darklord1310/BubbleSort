/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_swap_should_swap_the_2_values(void);
extern void test_single_bubble_sort_should_should_sort_to_3_1(void);
extern void test_single_bubble_sort_should_should_sort_neg_3_1_4(void);
extern void test_single_bubble_sort_should_should_sort_0_6_5_1(void);
extern void test_single_bubble_sort_should_should_sort_neg_2_0_3_4_90(void);
extern void test_bubbleSort_should_sort_to_1_8(void);
extern void test_bubbleSort_should_sort_to_1_2_3(void);
extern void test_bubbleSort_should_sort_to_neg_3_1_2_3(void);
extern void test_bubbleSort_should_sort_to_neg_3_0_1_2_3(void);
extern void test_bubbleSort_give_empty_should_do_nothing(void);
extern void test_bubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_Bubble_Sort.c";
  UnityBegin();
  RUN_TEST(test_swap_should_swap_the_2_values, 13);
  RUN_TEST(test_single_bubble_sort_should_should_sort_to_3_1, 22);
  RUN_TEST(test_single_bubble_sort_should_should_sort_neg_3_1_4, 31);
  RUN_TEST(test_single_bubble_sort_should_should_sort_0_6_5_1, 40);
  RUN_TEST(test_single_bubble_sort_should_should_sort_neg_2_0_3_4_90, 50);
  RUN_TEST(test_bubbleSort_should_sort_to_1_8, 61);
  RUN_TEST(test_bubbleSort_should_sort_to_1_2_3, 70);
  RUN_TEST(test_bubbleSort_should_sort_to_neg_3_1_2_3, 79);
  RUN_TEST(test_bubbleSort_should_sort_to_neg_3_0_1_2_3, 89);
  RUN_TEST(test_bubbleSort_give_empty_should_do_nothing, 100);
  RUN_TEST(test_bubbleSort_give_size_smaller_than_actual_size_should_do_nothing, 110);

  return (UnityEnd());
}
