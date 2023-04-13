#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocation memory
 *
 * @b: number of memory allocate (in bytes)
 *
 * Return: pointer
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
