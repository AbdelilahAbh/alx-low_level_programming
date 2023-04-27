#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - add a node in the end
 * @head: address of node
 *
 * Return: address of next node.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
