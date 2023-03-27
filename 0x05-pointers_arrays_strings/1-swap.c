#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: parametre of function
 * @b: parametre of function
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
