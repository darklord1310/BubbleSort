#include "DoubleBubbleSort.h"


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