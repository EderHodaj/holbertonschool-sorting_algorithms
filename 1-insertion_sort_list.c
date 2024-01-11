#include "sort.h"

/**
 * insertion_sort_list - sort elements by swaping their place
 * @list: a doubley linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		while (tmp->next != NULL)
		{
			if (tmp->next->n < tmp->n)

			tmp = tmp->prev;
		}
	}
	 	
}