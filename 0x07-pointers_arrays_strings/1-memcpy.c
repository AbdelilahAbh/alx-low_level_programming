#include "main.h"
/**
 *
 * _memcpu - a function that copies memory area
 *
 * @dest: in array
 * @src: out array
 * @n: number of bytes
 *
 * Return: return char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
