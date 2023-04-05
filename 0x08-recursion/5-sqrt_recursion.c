#include "main.h"

int find_root_sqrt_recursion(int n, int c);

/**
 * _sqrt_recursion - calculate the square of number
 *
 * @n: input
 *
 * Return: inerger.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root_sqrt_recursion(n, 0));
}

int find_root_sqrt_recursion(int n, int c)
{
	if (c * c > n)
	{
		return (-1);
	}
	if (c * c == n)
	{
		return (c);
	}
	return (find_root_sqrt_recursion(n, c + 1));
}
