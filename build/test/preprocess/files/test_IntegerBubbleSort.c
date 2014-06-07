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



void test_integerswap_given_3_and_2_should_return_2_3(void)

{

 int number[] = {3,2};

 int index1 = 0;

 int index2 = 1;

 integerSwap(number,&index1,&index2);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);



}



void test_integerswap_given_4_and_8_should_return_8_4(void)

{

 int number[] = {4,8};

 int index1 = 0;

 int index2 = 1;

 integerSwap(number,&index1,&index2);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);



}
