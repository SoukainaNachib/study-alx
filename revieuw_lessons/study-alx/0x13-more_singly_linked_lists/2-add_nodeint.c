#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_node = malloc(sizeof(listint_t));
	
	if(ptr_node == NULL)
	{	
		return NULL;
		exit(-1);
	}

	ptr_node->n = n;      /**data**/
	ptr_node->next = *head;  /**link**/
	*head = ptr_node;

	return ptr_node;
}
