#include "sort.h"
/**
 * swap_nodes - a function that swaps nodes
 * @list: a doubley linked list
 * @node1:the first node
 * @node2:the second node
*/
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2) {
	if (!node1 || !node2)
		return;

	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

	print_list(*list);
}

/**
 * insertion_sort_list - sort elements by swaping their place
 * @list: a doubley linked list
*/

void insertion_sort_list(listint_t **list) 
{
	if (!list || !(*list) || !((*list)->next))
		return;

	listint_t *current = (*list)->next;

	while (current) {
		listint_t *insert = current->prev;

		while (insert && insert->n > current->n) {
			swap_nodes(list, insert, current);
			insert = current->prev;
		}

		current = current->next;
	}
}
