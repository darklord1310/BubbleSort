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

 integerSwap(number,index1,index2);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);



}



void test_integerswap_given_4_and_8_should_return_8_4(void)

{

 int number[] = {4,8};

 int index1 = 0;

 int index2 = 1;

 integerSwap(number,index1,index2);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);

}



void test_singleintegerswap_given_3_and_0_should_return_0_3(void)

{

 int number[] = {3,0};

 singleintegerbubblesort(number,2,2);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}



void test_singleintegerswap_given_3_0_2_should_return_0_3_2(void)

{

 int number[] = {3,0,2};

 singleintegerbubblesort(number,3,3);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_INT);

}



void test_singleintegerswap_given_3_2_1_should_return_1_3_2(void)

{

 int number[] = {3,2,1};

 singleintegerbubblesort(number,3,3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)75, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)77, UNITY_DISPLAY_STYLE_INT);

}



void test_singleintegerswap_given_2_4_3_1_should_return_1_2_4_3(void)

{

 int number[] = {2,4,3,1};

 singleintegerbubblesort(number,4,4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[3])), (((void *)0)), (_U_UINT)87, UNITY_DISPLAY_STYLE_INT);

}



void test_integerbubblesort_given_2_1_should_return_1_2(void)

{

 int number[] = {2,1};

 integerbubblesort(number,2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);



}



void test_integerbubblesort_given_66_33_11_should_return_11_33_66(void)

{

 int number[] = {66,33,11};

 integerbubblesort(number,3);

 UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((33)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((66)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

}



void test_integerbubblesort_given_3_2_1_0_should_return_0_1_2_3(void)

{

 int number[] = {3,2,1,0};

 integerbubblesort(number,4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)114, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[3])), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);

}



void test_integerbubblesort_given_58_55_57_56_54_should_return_54_55_56_57_58(void)

{

 int number[] = {58,55,57,56,54};

 integerbubblesort(number,5);

 UnityAssertEqualNumber((_U_SINT)((54)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((55)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)123, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((56)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)124, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((57)), (_U_SINT)((number[3])), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((58)), (_U_SINT)((number[4])), (((void *)0)), (_U_UINT)126, UNITY_DISPLAY_STYLE_INT);

}



void test_integerbubbleSort_give_empty_should_do_nothing(void)

{

 int number[]= {3,2,1};

 integerbubblesort(number,0);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)133, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)134, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_INT);



}



void test_integerbubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void)

{

 int number[]= {3,2};

 integerbubblesort(number,1);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)143, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)144, UNITY_DISPLAY_STYLE_INT);

}
