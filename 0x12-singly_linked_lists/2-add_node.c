#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a node at the beginning of a list
 * @head: points to the head of a list
 * @str: What is passed in the new node
 * Return: address of the node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	if (!(head && str))
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}
	new_node->str = strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
