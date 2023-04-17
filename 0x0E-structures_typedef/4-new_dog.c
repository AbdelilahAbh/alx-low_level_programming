#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calcul the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _strcpy - copies string
 *
 * @dest: string destination
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - struct create a new structure
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
	int ln, lo;

	ln = _strlen(name);
	lo = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ln + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lo + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
