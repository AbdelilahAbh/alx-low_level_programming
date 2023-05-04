#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to decimal
 * @b: string binary number
 *
 * Return: number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);

		decimal = decimal * 2 + (b[i] - '0');
	}

	return (decimal);
}
