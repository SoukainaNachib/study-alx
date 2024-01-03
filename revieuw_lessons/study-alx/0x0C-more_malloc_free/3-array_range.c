#include"main.h"
#include<stdlib.h>

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;
	int size;
	
	if(min>max)
	{
		return NULL;
	}
	size = max-min+1;
	ptr= malloc(sizeof(int)*size);
	if(ptr== NULL)
	{
		return NULL;
	}
	for(i=0; i<= max ;i++)
	{
		ptr[i] = min;
		min++;
	}
	return ptr;
}
