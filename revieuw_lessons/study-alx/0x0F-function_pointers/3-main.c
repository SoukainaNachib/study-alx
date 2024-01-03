#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{	int num1,num2,ans;
	int (*res)(int, int);
	char *op;
	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1= atoi(argv[1]);
	op = argv[2];
	num2= atoi(argv[3]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(op);
	ans = res(num1, num2);

	printf("%d\n", ans);
	return 0;
}
