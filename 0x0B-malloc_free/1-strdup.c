#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - copy string to a pointer
 *
 * @str: input string
 *
 * Return: copy of string.
 */
char *_strdup(char *str)
{
	char *arr;
	int size;
	int i;

	size = strlen(str);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = str[i];
		i++;
	}

	return (arr);
}
