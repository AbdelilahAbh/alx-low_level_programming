#include "main.h"

int find_prime(int n, int i);

/**
 * is_prime_number - find prime number
 *
 * @n: input
 *
 * Return: integer.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, n - 1));
}

/**
 * find_prime - function help to find the prime number
 *
 * @n: input
 * @i: input
 *
 * Return: integer.
 */

int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (find_prime(n, i - 1));
}
