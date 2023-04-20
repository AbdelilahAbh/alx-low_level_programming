#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all arguments separate be ','.
 *
 * @separator: separator between numbers
 * @n: numbers
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptrn;
	unsigned int i;

	va_start(ptrn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptrn, const unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptrn);
}
