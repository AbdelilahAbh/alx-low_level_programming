#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node in the end
 * @head: address of node
 * @str: string node
 *
 * Return: address of next node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *currentNode;
	unsigned int i = 0;

	while (str[i])
		i++;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = newNode;

	return (newNode);
}
