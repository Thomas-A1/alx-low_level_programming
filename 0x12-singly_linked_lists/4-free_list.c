#include "lists.h"

/**
 * free_list - frees a list
 * @head: Points to the beginning of a list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freed;

	while (head)
	{
		freed = head;
		head = head->next;
		free(freed->str);
		free(freed);
	}
}
