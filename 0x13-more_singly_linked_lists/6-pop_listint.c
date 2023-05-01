 #include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the header node
 * @head: struct list
 *
 * Return: header node n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if ((*head)->next == NULL)
		return (0);
	while (*head)
	{
		tmp = (*head)->next;
		free((*head)->next);
		*head = tmp;
	}

	return ((*head)->n);
}
