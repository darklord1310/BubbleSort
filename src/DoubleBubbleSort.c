#include "DoubleBubbleSort.h"

/*
* Compare 2 doubles and return if greater , same
* or smaller.
*
*Input:
*      v1 is the pointer to the first value
*	   v2 is the pointer to the second value
*Return:
*	   1 if *v1 >  *v2
*	   0 if *v1 == *v2
*	  -1 if *v1 <  *v2
*/
double doubleCompare(void *v1, void *v2)
{
	double *value1 = (double *)v1;
	double *value2 = (double *)v2;
	
	if ( *value1 < *value2)
		return -1;
	else if(*value1 == *value2)
		return 0;
	else
		return 1;
}

/*
*Swap 2 doubles in the array given
*
*Input:
*      array is an array of doubles
*	   index1 is the index of the first double in the array
*	   index2 is the index of the second double in the array

*Precondition:
*	  indices given must be within bounds of the array
*/
void doubleSwap(void *array, void *index1, void *index2)
{
	double temp;
	int *value1 = (int *)index1;
	int *value2 = (int *)index2;
	double *double_array = (double *)array;
	temp= double_array[*value2];
	double_array[*value2] = double_array[*value1];
	double_array[*value1] = temp;
}