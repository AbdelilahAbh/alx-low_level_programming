#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all element
 * @h: struct h
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *new;

	new = (listint_t *) h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		n++;
	}
	return (n);
}
