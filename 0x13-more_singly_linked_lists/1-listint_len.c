#include "list.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: the head of a linked list
 * Return: the number of elements
 */
size listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counter = 0;

	while (cursor != NULL)
	{
		counter += 1;
		cursor = cursor->next;
	}
	return (counter);
}
