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

	if (*head == NULL)
		return (0);

	if (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	return ((*head)->n);
}
