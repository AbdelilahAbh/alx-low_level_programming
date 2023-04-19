#include <stdlib.h>
#include "main.h"

/**
 * strtow - concatenates all the arguments of function
 *
 * @str: string input
 *
 * Return: charactere.
 */

char **strtow(char *str)
{
	int i, j;
	char *arr;

	if ((str == "") || str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(char) * i + 1);
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			arr[i] = '\0';
		}
		else
		{
			arr[i] = str[i];
		}
	}
	return (arr);
}
