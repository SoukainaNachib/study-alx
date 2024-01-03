#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{	
	listint_t *tmp;
	listint_t *ptr_node = malloc(sizeof(listint_t));
	if(ptr_node == NULL)
	{
		return NULL;
	}

	ptr_node->n = n;  /**data**/
	ptr_node->next = NULL; /**link**/
	
	if (*head == NULL) 
	{
        	*head = ptr_node;
	}
	else 
	{
		 tmp = *head;

		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr_node;
	}
	return ptr_node;
}
