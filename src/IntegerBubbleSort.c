#include "IntegerBubbleSort.h"

/*
* Compare 2 integers and return if greater , same
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
int integerCompare(void *v1, void *v2)
{
	int *value1 = (int *)v1;
	int *value2 = (int *)v2;
	
	if ( *value1 < *value2)
		return -1;
	else if(*value1 == *value2)
		return 0;
	else
		return 1;
}

/*
*Swap 2 integers in the array given
*
*Input:
*      array is an array of integers
*	   index1 is the index of the first integer in the array
*	   index2 is the index of the second integer in the array

*Precondition:
*	  indices given must be within bounds of the array
*/
void integerSwap(void *array, int index1, int index2)
{
	int temp;
	int *int_array = (int *)array;
	
	temp= int_array[index2];
	int_array[index2] = int_array[index1];
	int_array[index1] = temp;
}

/*
*Swap a set integers in the array given only for one phase
*
*Input:
*      array is an array of integers
*	   size is the number of the element in the array which needed to be swap
*	   length is the length of the array

*Precondition:
*	  indices given must be within bounds of the array
*/
void singleintegerbubblesort(void *array,int size,int length)
{
	int *int_array = (int *)array;
	int compare_result;
	int index1,index2;
	
	while((size-1)!=0)
	{
		index1 = length-1;
		index2 = size-2;
		compare_result = integerCompare(&int_array[index1], &int_array[index2]);
		
		if(compare_result == -1 )
			integerSwap(int_array,index1,index2);
		  
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
void integerbubblesort(void *array,int length)
{
	int size=length;
	int count;
	
	for(count=0;count<length;count++)
	{
	singleintegerbubblesort(array,size,length);
	}
}