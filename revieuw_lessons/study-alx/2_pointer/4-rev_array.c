#include "main.h"

void reverse_array(int *a, int n){
	int i,tmp,j;

	j=n-1;
	
	for( i=0; i< n/2 ;i++)
	{
		tmp = a[i];
		a[i]=a[j];
		a[j]=tmp;
		j--;
	}
}
