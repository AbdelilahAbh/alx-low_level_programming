#include "main.h"

/**
 * _puts_recursion -print string
 *
 * @s: input
 *
 * Return: string.
 */
void _puts_recursion(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
