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

	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
