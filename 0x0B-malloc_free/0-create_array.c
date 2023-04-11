#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - fuction create an array of character
 *
 * @size: size of array
 * @c: character of array
 *
 * Return: character.
 */

char *create_array(unsigned int size, char c)
{
	unsigned  int i;
	char *arr;


	arr = malloc(sizeof(arr) * size);
	i = 0;
	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
