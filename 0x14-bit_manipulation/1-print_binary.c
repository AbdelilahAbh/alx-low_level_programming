#include <stdlib.h>
#include "main.h"
/**
 * print_binary - print number in binary formate
 * @n: the number give as to convert to binary
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num	& 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');

}
