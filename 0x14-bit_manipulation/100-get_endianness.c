#include <stdlib.h>
#include "main.h"

/**
 * get_endianness -  checks the endianness.
 *
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
