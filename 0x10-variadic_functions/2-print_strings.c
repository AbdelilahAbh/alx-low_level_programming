#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string arguments
 *
 * @separator: separator of strings
 * @n: number of string
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptrn;
	unsigned int i;
	char *str;

	va_start(ptrn, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptrn, char *);
		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptrn);
}
