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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((integerCompare(&v1,&v2))), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);



}



void test_integercompare_given_2_and_3_should_return_neg_1(void)

{

 int v1 = 2, v2 = 3;

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((integerCompare(&v1,&v2))), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);



}



void test_integercompare_given_3_and_2_should_return_1(void)

{

 int v1 = 3, v2 = 2;

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((integerCompare(&v1,&v2))), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);



}
