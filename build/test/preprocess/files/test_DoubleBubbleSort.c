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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((doubleCompare(&v1,&v2))), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);



}



void test_doublecompare_given_4p1_and_4p2_should_return_neg_1(void)

{

 double v1 = 4.1, v2 = 4.2;

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((doubleCompare(&v1,&v2))), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);



}



void test_doublecompare_given_5p5_and_2p3_should_return_1(void)

{

 double v1 = 5.5, v2 = 2.3;

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((doubleCompare(&v1,&v2))), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);



}



void test_doubleswap_given_3p0_and_1p7_should_return_1p7_3p0(void)

{

 double number[] = {3.0 , 1.7};

 int index1 = 0;

 int index2 = 1;

 doubleSwap(number,index1,index2);

 UnityAssertEqualNumber((_U_SINT)((1.7)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3.0)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);

}



void test_doubleswap_given_4p1_and_7p8_should_return_7p8_4p1(void)

{

 double number[] = {4.1,7.8};

 int index1 = 0;

 int index2 = 1;

 doubleSwap(number,index1,index2);

 UnityAssertEqualNumber((_U_SINT)((7.8)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.1)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

}



void test_singledoublebubblesort_given_9p8_and_3p1_should_return_3p1_9p8(void)

{

 double number[] = {9.8,3.1};

 singledoublebubblesort(number,2,2);

 UnityAssertEqualNumber((_U_SINT)((3.1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((9.8)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

}



void test_singledoublebubblesort_given_3p2_3p1_4p0_should_return_3p1_3p2_4p0(void)

{

 double number[] = {3.2,3.1,4.0};

 singledoublebubblesort(number,3,3);

 UnityAssertEqualNumber((_U_SINT)((3.1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3.2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.0)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

}



void test_singledoublebubblesort_given_3p1_2p1_1p1_should_return_1p1_3p1_2p1(void)

{

 double number[] = {3.1,2.1,1.1};

 singledoublebubblesort(number,3,3);

 UnityAssertEqualNumber((_U_SINT)((1.1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)74, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3.1)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)75, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2.1)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);

}



void test_singledoublebubblesort_given_0p1_2p2_1p2_0p7_should_return_0p1_0p7_2p2_1p2(void)

{

 double number[] = {0.1,2.2,1.2,0.7};

 singledoublebubblesort(number,4,4);

 UnityAssertEqualNumber((_U_SINT)((0.1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.7)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2.2)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1.2)), (_U_SINT)((number[3])), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

}



void test_doublebubbblesort_given_0p9_0p1_should_return_0p1_0p9(void)

{

 double number[] = {0.1,0.9};

 doublebubblesort(number,2);

 UnityAssertEqualNumber((_U_SINT)((0.1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.9)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);



}



void test_doublebubbblesort_given_0p9_0p1_0p0_should_return_0p0_0p9_0p1(void)

{

 double number[] = {0.9,0.1,0.0};

 doublebubblesort(number,3);

 UnityAssertEqualNumber((_U_SINT)((0.0)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)102, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.9)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.1)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);



}



void test_doublebubbblesort_given_5p2_4p2_3p2_2p2_should_return_2p2_3p2_4p2_5p2(void)

{

 double number[] = {5.2,4.2,3.2,2.2};

 doublebubblesort(number,4);

 UnityAssertEqualNumber((_U_SINT)((2.2)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3.2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.2)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)114, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5.2)), (_U_SINT)((number[3])), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);

}





void test_doublebubbblesort_given_0p2_0p1_0p5_0p4_1p8_should_return_0p1_0p2_0p4_0p5_1p8(void)

{

 double number[] = {0.2,0.1,0.5,0.4,1.8};

 doublebubblesort(number,5);

 UnityAssertEqualNumber((_U_SINT)((0.1)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)123, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)124, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.4)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0.5)), (_U_SINT)((number[3])), (((void *)0)), (_U_UINT)126, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1.8)), (_U_SINT)((number[4])), (((void *)0)), (_U_UINT)127, UNITY_DISPLAY_STYLE_INT);

}



void test_doublebubbleSort_give_empty_should_do_nothing(void)

{

 double number[]= {3.0,2.0,1.1};

 doublebubblesort(number,0);

 UnityAssertEqualNumber((_U_SINT)((3.0)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)134, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2.0)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1.1)), (_U_SINT)((number[2])), (((void *)0)), (_U_UINT)136, UNITY_DISPLAY_STYLE_INT);

}



void test_doublebubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void)

{

 double number[]= {3.3,2.2};

 doublebubblesort(number,1);

 UnityAssertEqualNumber((_U_SINT)((3.3)), (_U_SINT)((number[0])), (((void *)0)), (_U_UINT)143, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2.2)), (_U_SINT)((number[1])), (((void *)0)), (_U_UINT)144, UNITY_DISPLAY_STYLE_INT);

}
