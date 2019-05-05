#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a list.
 * @n: data.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	current_node = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (!current_node)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	for (; current_node->next;)
		current_node = current_node->next;
	current_node->next = new_node;
	new_node->prev = current_node;
	return (new_node);
}
