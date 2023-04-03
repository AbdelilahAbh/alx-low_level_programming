#include "main.h"
/**
 * _strspn - function search the character
 *
 * @s: array of element inisial
 * @accept: array element seconde
 *
 * Return: character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
