#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: name printed
 * @f: pointer to functio
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
