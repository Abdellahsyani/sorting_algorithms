#include "sort.h"

/**
 * insertion_sort_list - the function to sort the doubly linked list.
 * @list: The list to sort.
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *slow = NULL, *fast = NULL;

	if (list)
		fast = *list;
	while (fast)
	{
		slow = fast->prev;
		while (slow && fast->n < slow->n)
		{
			if (fast->next)
				fast->next->prev = slow;
			if (slow->prev)
				slow->prev->next = fast;
			slow->next = fast->next;
			fast->next = slow;
			fast->prev = slow->prev;
			slow->prev = fast;
			slow = fast->prev;
			if (slow == NULL)
				*list = fast;
			print_list(*list);
		}
		fast = fast->next;
	}
}
