#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Organizes an array using the ins sort method
 *
 * @list: Double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *nnex;

	if (!list || !*list)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		nnex = curr->next;
		while (curr->prev != NULL && curr->prev->n > curr->n)
		{
			curr->prev->next = curr->next;

			if (curr->next)
				curr->next->prev = curr->prev;
			curr->next = curr->prev;
			curr->prev = curr->next->prev;
			curr->next->prev = curr;

			if (curr->prev == NULL)
				*list = curr;

			if (curr->prev)
				curr->prev->next = curr;
			print_list(*list);
		}
		curr = nnex;
	}
}
