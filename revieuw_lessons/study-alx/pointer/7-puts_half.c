#include "main.h"

void puts_half(char *str)
{
    int len, n;
    len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    if (len % 2 == 0)
    {
        n = len / 2;
        while (str[n] != '\0')
        {
            _putchar(str[n]);
            n++;
        }
    }
    if (len % 2 != 0)
    {
        n = (len - 1) / 2;
        while (str[n] != '\0')
        {
            _putchar(str[n]);
            n++;
        }
    }
    _putchar('\n');
}	
