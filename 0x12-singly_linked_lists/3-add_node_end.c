#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end
 * @head: Points to the head node
 * @str: The string to be passed into the node
 * Return: Pointer to the node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *last;
	unsigned int i;

	if (!(head && str))
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i]; i++)
	{}
	newnode->len = i;
	newnode->next = NULL;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = newnode;
	return (newnode);
}

