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
void doubleSwap(void *array, int index1, int index2)
{
	double temp;
	double *double_array = (double *)array;
	temp= double_array[index2];
	double_array[index2] = double_array[index1];
	double_array[index1] = temp;
}

/*
*Swap a set doubles in the array given only for one phase
*
*Input:
*      array is an array of doubles
*	   size is the number of the element in the array which needed to be swap
*	   length is the length of the array

*Precondition:
*	  indices given must be within bounds of the array
*/
void singledoublebubblesort(void *array,int size,int length)
{
	double *double_array = (double *)array;
	int compare_result;
	int index1,index2;
	
	while((size-1)!=0)
	{
		index1 = length-1;
		index2 = size-2;
		compare_result = doubleCompare(&double_array[index1], &double_array[index2]);
		
		if(compare_result == -1 )
			doubleSwap(double_array,index1,index2);
		  
	length--;
	size--;
	}
}

/*
*Fully swap a set integers in the array given only 
*
*Input:
*      array is an array of integers
*	   length is the length of the array

*Precondition:
*	  indices given must be within bounds of the array
*/
void doublebubblesort(void *array,int length)
{
	int size=length;
	int count;
	
	for(count=0;count<length;count++)
	{
	singledoublebubblesort(array,size,length);
	}
}