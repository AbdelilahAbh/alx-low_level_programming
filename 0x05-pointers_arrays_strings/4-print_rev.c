#include "main.h"

/**
 * print_rev - print a string
 *
 * @s: parametre of function
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int cont = 0;
	int i;

	while (*s != '\0')
	{
		cont++;
		s++;
	}
	s--;
	for (i = cont; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
