#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of file c
 *
 * @argc: number of chose in command line
 * @argv: array of string contain element entre in command line
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 2 || argc > 3)
		printf("Error\n");
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (1);
}
