#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linkes list
 * @h: linkes list
 * Return: number of elemenet in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
