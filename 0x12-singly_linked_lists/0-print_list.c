#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print all the elements of list_t
 * @h: The head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
