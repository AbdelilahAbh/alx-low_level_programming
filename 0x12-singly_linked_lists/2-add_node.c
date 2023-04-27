#include <stdlib.h>
#include "lists.h"
#include<string.h>
/**
 * add_node - add a node at beginning
 * @head: head link
 * @str: string of link
 * Return: next address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i = 0;

	while (str[i])
		i++;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
