#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: seconde string
 *
 * Return: string.
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	k = i + j;
	arr = malloc(sizeof(char) * (k + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		j++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
