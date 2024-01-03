#include "main.h"
/**
char *string_toupper(char *s)
{
	int i;
	for(i=0;s[i] != '\0';i++)
	{
		if(s[i]>'a' && s[i] <= 'z')
		
			s[i]=s[i]-32;
		
	}
		return (s);
}
**/


char *string_toupper(char *s)
{
	char *ptr= s;
	for(; *s!='\0';*s++)
	{
		if(*s>'a' && *s<='z')
			*s -= 32;
	}
		return (ptr);
}
	
