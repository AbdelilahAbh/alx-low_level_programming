#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print minimum number of coins
 *
 * @argc: nmb of arg
 * @argv: arry of arg
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int num, i, min;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	min = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			min++;
			num -= coins[i];
		}
	}
	printf("%d\n", min);
	return (0);

}
