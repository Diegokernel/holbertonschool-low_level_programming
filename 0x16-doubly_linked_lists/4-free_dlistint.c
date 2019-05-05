#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to a list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free;

	while (head)
	{
		to_free = head;
		head = head->next;
		free(to_free);
	}
}
