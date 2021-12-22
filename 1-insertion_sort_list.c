#include "sort.h"
/**
 *insertion_sort_list - sort doubly linked list of int
 *@list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a;
	listint_t *temp;

	if (list == NULL)
	{
		return;
	}
	if (*list == NULL)
	{
		return;
	}
	a = (*list)->next;
	while (a)
	{
		temp = a->next;
		while (a->prev && a->prev->n > a->n)
		{
			a->prev->next = a->next;
			if (a->next != NULL)
			{
				a->next->prev = a->prev;
			}
			a->next = a->prev;
			a->prev = a->prev->prev;
			a->next->prev = a;
			if (a->prev != NULL)
			{
				a->prev->next = a;
			}
			else
			{
				*list = a;
			}
			print_list(*list);
		}
	a = temp;
	}
}
