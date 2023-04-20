#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calcul sum of all argument
 *
 * @n: number of parametres
 *
 * Return: sum of parametre
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptrn;

	if (n == 0)
		return (0);
	va_start(ptrn, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptrn, const unsigned int);
	}
	va_end(ptrn);
	return (sum);
}
