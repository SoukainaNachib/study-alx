#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *ptr;
        unsigned int i;

        if(size == 0 || nmemb == 0)
        {
                return NULL;
        }
        ptr= malloc(nmemb * size);

        if(ptr == NULL)
        {
                return NULL;
        }

        for(i= 0 ; i < nmemb*size ;i++)
        {
                *(ptr+i)=0;
        }
        return((void *)ptr);
}
