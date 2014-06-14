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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((charCompare(&v1,&v2))), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);



}



void test_charcompare_given_v1_and_v2_equal_should_return_0(void)

{

 char v1[] = "Superman", v2[] = "Superman";

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((charCompare(&v1,&v2))), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);



}



void test_charcompare_given_v1_smaller_than_v2_should_return_neg_1(void)

{

 char v1[] = "ali", v2[] = "alive";

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((charCompare(&v1,&v2))), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);



}
