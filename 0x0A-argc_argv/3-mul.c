#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple of two number
 *
 * @argc: number of chose in command line
 * @argv: array of string contain element entre in command line
 *
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
