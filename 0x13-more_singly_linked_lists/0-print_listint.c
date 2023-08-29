#include "lists.h"
/**
* printunction
* print_function
* @h: Poing.
* Descriptiprints all the elements of a listint_t list.
* Return:  nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
