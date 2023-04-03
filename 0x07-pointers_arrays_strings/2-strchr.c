#include "main.h"
/**
 * _strchr - function search the character
 *
 * @s: array of element
 * @c: character that's search
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
