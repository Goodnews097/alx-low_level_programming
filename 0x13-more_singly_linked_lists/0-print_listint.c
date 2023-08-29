#include "lists.h"

/**
 * prins all the elements of a linked list
 * @h:  listint_t to print
 *
 * Retumber of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
