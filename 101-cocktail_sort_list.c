#include "sort.h"

/**
 * void cocktail_sort_list - 
 * @:list
 */

void cocktail_sort_list(listint_t **list)
{
	int swap = 1;
	listint_t *curr;

	if (!list)
		return;
	if (*list && !(*list)->next)
		return;
	curr = *list;
	while (swap)
	{
		swap = 0;
		while (curr->next)
		{
			if (curr->n > curr->next->n)
			{
				swap_nodes


