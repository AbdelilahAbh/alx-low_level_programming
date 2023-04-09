#include <stdio.h>

/**
 * main - print the name of file c
 *
 * @argc: number of chose in command line
 * @argv: array of string contain element entre in command line
 *
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
