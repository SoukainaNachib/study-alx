#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char* ptr=dest;
	int i;
	i=0;

	
	while(*dest != '\0')
	{
		dest++;
	}

	while(i < n)
	{	if(*src != '\0')
		{
			*dest=*src;
			dest++;
			src++;
		}
		i++;
	}
	return (ptr);
}
