#include <stdio.h>


int main(){
	int i;
	int a,b,fbchi;

	a=1;
	b=2;
	printf("%d,%d", a,b);
	for( i= 0; i < 50; i++)
	{
		fbchi= a+b;
		printf(" %d",fbchi);

		a=b;
		b=fbchi;
	}
	printf("\n");
	return (0);
}

