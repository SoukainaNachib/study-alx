#include "main.h"
#include <stdlib.h>

int lent_s(char *s)
{
	int lent = 0;
	while(s[lent] != '\0')
	{
		lent++;
	}
	return(lent);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lent1,lent2,i,j;
	i=0;

	lent1=lent_s(s1);
	lent2=lent_s(s2);
	if(n>lent2)
	{
		ptr = malloc(lent1+lent2+1);
	}
	else
	{
		ptr =malloc(lent1+n+1);
	}
	if(ptr==NULL)
	{
		return NULL;
	}
	for(j=0;s1[j]!='\0';i++,j++)
	{
		ptr[i]=s1[j];
	}
	for(j=0; s2[j]!='\0' && j<n; j++,i++)
        {
                ptr[i]=s2[j];
        }
	ptr[i]='\0';
	return ptr;
}
