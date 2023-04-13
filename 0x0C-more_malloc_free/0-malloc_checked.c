#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion -print string
 *
 * @s: input
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
