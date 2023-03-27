#include "main.h"

/**
 * _puts - print a string
 *
 * @str: parametre of function
 *
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
