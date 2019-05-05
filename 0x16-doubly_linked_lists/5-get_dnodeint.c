#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to linked list
 * @index: index of the node, starting at 0
 * Return: nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (!head)
		return (NULL);
	for (counter = 0; counter < index; counter++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
