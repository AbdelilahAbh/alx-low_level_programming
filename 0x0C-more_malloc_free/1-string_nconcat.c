#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: seconde string
 * @n: number of bytes
 *
 * Return: string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		ptr = malloc(sizeof(char) * (i + 1 + n));
	else
		ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
