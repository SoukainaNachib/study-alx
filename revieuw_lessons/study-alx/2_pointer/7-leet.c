#include "main.h"

char *leet(char *str)
{
    char *ptr = str;
    char *s1 = "aAeEoOtTlL";
    char *s2 = "4433007711";

    for (; *str != '\0';str++)
    {
        s1 = "aAeEoOtTlL";
        s2 = "4433007711";       
        for (; *s1 != '\0'; s1++, s2++)
        {
            if (*str == *s1)
            {
                *str = *s2;
            }
        }
    }
    return (ptr);
}

