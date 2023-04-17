#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print structure dog
 *
 * @d: structure name
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	else
	{
		if (d->name == NULL || d->owner == NULL)
		printf("nil");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
