#include "lists.h"

/**
 * prin the elejsdjdsdsdhhdsments of a linked list
 * @h: ype listint_t to prindsdsdsdt
 *
 * Retddjjsdhrbber of nodes
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
