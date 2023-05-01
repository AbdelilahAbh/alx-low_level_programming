#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free listint_t
 * @head: struct head
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head->n);
		free(head);
	}
}
