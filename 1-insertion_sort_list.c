#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a
 *  list with the insertion sort method
 *  @list: the list to be sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *move, *hold;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	move = hold = (*list)->next;
	while (hold)
	{
		hold = hold->next;
		while (move->prev && move->n < move->prev->n)
		{
			if (move->next)
				move->next->prev = move->prev;
			move->prev->next = move->next;
			move->next = move->prev;
			move->prev = move->prev->prev;
			move->next->prev = move;
			if (move->prev)
				move->prev->next = move;
			else
				*list = move;
			print_list(*list);
		}
		move = hold;
	}
}
