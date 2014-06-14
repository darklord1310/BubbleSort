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
extern void test_integercompare_given_3_and_3_should_return_0(void);
extern void test_integercompare_given_2_and_3_should_return_neg_1(void);
extern void test_integercompare_given_3_and_2_should_return_1(void);
extern void test_integerswap_given_3_and_2_should_return_2_3(void);
extern void test_integerswap_given_4_and_8_should_return_8_4(void);
extern void test_singleintegerswap_given_3_and_0_should_return_0_3(void);
extern void test_singleintegerswap_given_3_0_2_should_return_0_3_2(void);
extern void test_singleintegerswap_given_3_2_1_should_return_1_3_2(void);
extern void test_singleintegerswap_given_2_4_3_1_should_return_1_2_4_3(void);
extern void test_integerbubblesort_given_2_1_should_return_1_2(void);
extern void test_integerbubblesort_given_66_33_11_should_return_11_33_66(void);
extern void test_integerbubblesort_given_3_2_1_0_should_return_0_1_2_3(void);
extern void test_integerbubblesort_given_58_55_57_56_54_should_return_54_55_56_57_58(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_IntegerBubbleSort.c";
  UnityBegin();
  RUN_TEST(test_integercompare_given_3_and_3_should_return_0, 12);
  RUN_TEST(test_integercompare_given_2_and_3_should_return_neg_1, 19);
  RUN_TEST(test_integercompare_given_3_and_2_should_return_1, 26);
  RUN_TEST(test_integerswap_given_3_and_2_should_return_2_3, 33);
  RUN_TEST(test_integerswap_given_4_and_8_should_return_8_4, 44);
  RUN_TEST(test_singleintegerswap_given_3_and_0_should_return_0_3, 54);
  RUN_TEST(test_singleintegerswap_given_3_0_2_should_return_0_3_2, 62);
  RUN_TEST(test_singleintegerswap_given_3_2_1_should_return_1_3_2, 71);
  RUN_TEST(test_singleintegerswap_given_2_4_3_1_should_return_1_2_4_3, 80);
  RUN_TEST(test_integerbubblesort_given_2_1_should_return_1_2, 90);
  RUN_TEST(test_integerbubblesort_given_66_33_11_should_return_11_33_66, 99);
  RUN_TEST(test_integerbubblesort_given_3_2_1_0_should_return_0_1_2_3, 108);
  RUN_TEST(test_integerbubblesort_given_58_55_57_56_54_should_return_54_55_56_57_58, 118);

  return (UnityEnd());
}
