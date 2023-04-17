#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * dog_t *new_dog - struct create a new structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
