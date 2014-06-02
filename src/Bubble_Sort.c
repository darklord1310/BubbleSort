#include "Bubble_Sort.h"
#include <stdio.h>


void swap(int array[],int index1,int index2)
{
	int temp;
	temp=array[index2];
	array[index2]=array[index1];
	array[index1]=temp;

}

void singlebubblesort(int array[],int size,int length)
{
	while((size-1)!=0)
	{
	if(array[length-1] < array[size-2])
		swap(array,size-2,length-1);
	length--;
	size--;
	}
}

void bubblesort(int array[],int length)
{
	int size=length;
	int count;
	
	for(count=0;count<length;count++)
	{
	singlebubblesort(array,size,length);
	}
}