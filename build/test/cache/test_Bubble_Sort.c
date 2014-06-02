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

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);



}



void test_single_bubble_sort_should_should_sort_to_3_1(void)

{

 int array[]= {3,1};

 singlebubblesort(array,2,2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)26, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);



}



void test_single_bubble_sort_should_should_sort_neg_3_1_4(void)

{

 int array[]= {1,4,-3};

 singlebubblesort(array,3,3);

 UnityAssertEqualNumber((_U_SINT)((-3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

}



void test_single_bubble_sort_should_should_sort_0_6_5_1(void)

{

 int array[]= {6,5,1,0};

 singlebubblesort(array,4,4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

}



void test_single_bubble_sort_should_should_sort_neg_2_0_3_4_90(void)

{

 int array[]= {0,3,-2,4,90};

 singlebubblesort(array,5,5);

 UnityAssertEqualNumber((_U_SINT)((-2)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)54, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((90)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

}



void test_bubbleSort_should_sort_to_1_8(void)

{

 int array[]= {8,1};

 bubblesort(array,2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);



}



void test_bubbleSort_should_sort_to_1_2_3(void)

{

 int array[]= {3,2,1};

 bubblesort(array,3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)74, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)75, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);

}



void test_bubbleSort_should_sort_to_neg_3_1_2_3(void)

{

 int array[]= {3,2,1,-3};

 bubblesort(array,4);

 UnityAssertEqualNumber((_U_SINT)((-3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

}



void test_bubbleSort_should_sort_to_neg_3_0_1_2_3(void)

{

 int array[]= {3,2,1,-3,0};

 bubblesort(array,5);

 UnityAssertEqualNumber((_U_SINT)((-3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)96, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)97, UNITY_DISPLAY_STYLE_INT);

}



void test_bubbleSort_give_empty_should_do_nothing(void)

{

 int array[]= {3,2,1};

 bubblesort(array,0);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)106, UNITY_DISPLAY_STYLE_INT);



}



void test_bubbleSort_give_size_smaller_than_actual_size_should_do_nothing(void)

{

 int array[]= {3,2};

 bubblesort(array,1);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)114, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);



}
