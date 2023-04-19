#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print array
 *
 * @array: array used
 * @size: size of array
 * @action: fuction
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(action)(array[i]);
	}
}
