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



void test_charswap_given_ali_and_abu_should_return_abu_ali(void)

{

 char name[][40] = {"ali","abu"};

 int index1 = 1;

 int index2 = 2;

 charSwap(name,&index1,&index2);

 UnityAssertEqualNumber((_U_SINT)(("abu")), (_U_SINT)((name[0])), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)(("ali")), (_U_SINT)((name[1])), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);



}
