#include "main.h"

/**
 * _memset - function replace number of bytes
 *
 * @s: first address of string
 * @b: character that's replas bu it
 * @n: number of byts
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
