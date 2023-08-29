#include "lists.h"

/**
 * prin the elements of a linked list
 * @h: ype listint_t to print
 *
 * Retuber of nodes
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

