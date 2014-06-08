#include "CharSort.h"
#include <string.h>

/*
* Compare 2 characters and return if greater , same
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
char charCompare(void *v1, void *v2)
{
	char *value1 = (char *)v1;
	char *value2 = (char *)v2;
	
	if ( (strcmp(value1,value2)) > 0 )
		return 1;
	else if((strcmp(value1,value2)) == 0)
		return 0;
	else
		return -1;
}

// /*
// *Swap 2 characters in the array given
// *
// *Input:
// *      array is an array of characters
// *	   index1 is the index of the first characters in the array
// *	   index2 is the index of the second characters in the array

// *Precondition:
// *	  indices given must be within bounds of the array
// */
void charSwap(void *array, void *index1, void *index2)
{
	char temp;
	int *value1 = (int *)index1;
	int *value2 = (int *)index2;
	char *char_array = (char *)array;
	temp= char_array[*value2];
	char_array[*value2] = char_array[*value1];
	char_array[*value1] = temp;
	
}