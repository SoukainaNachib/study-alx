#include "main.h"


unsigned int _strspn(char *s, char *accept){

        unsigned int count = 0;

        while(*s!= '\0')
        {
                while(*accept != '\0')
                {
                        if(*s == *accept)
                                count++;
                        accept++;
                }
                s++;
                *accept = 0;
        }
        return (count);
}
