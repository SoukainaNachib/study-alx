#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("errors\n");
		return (1);
	}
	printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
	return 0;
}
