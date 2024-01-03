#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t listint_len(const listint_t *h)
{
	int count;
	count = 0;
	while(h)
	{
		count++;
		h = h->next;
	}
	return count;
}
