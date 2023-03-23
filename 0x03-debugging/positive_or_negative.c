#include "main.h"
/**
 *main - Print special message
 *
 * @i: parametre of function
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
}
