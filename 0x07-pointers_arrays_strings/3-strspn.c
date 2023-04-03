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
	int i = 0;
	int c = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			c++;
		}
	}

	return (c);
}
