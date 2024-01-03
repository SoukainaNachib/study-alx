#include "main.h"

char *cap_string(char *str)
{

	char src[13] = {' ', '\t', '\n', ';','.','!', '?', '"', '(', ')', '{', '}'};
	 int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if(str[i] == src[j])
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
