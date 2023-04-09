#include <stdio.h>

/**
 * main - print the name of file c
 *
 * @argc: number of chose in command line
 * @argv: array of string contain element entre in command line
 *
 * Return: Always 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
