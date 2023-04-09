#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
