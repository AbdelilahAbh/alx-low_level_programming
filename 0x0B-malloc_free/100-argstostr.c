#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * argstostr - concatenates all the arguments of function
 *
 * @ac: nb of charactere of function
 * @av: array of parametre
 *
 * Return: charactere.
 */
char *argstostr(int ac, char **av)
{
	int i, j, n, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		if (str[n] == '\0')
			str[n++] = '\n';
	}
	return (str);
}
