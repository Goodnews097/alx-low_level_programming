#include "lists.h"
/**
*ns the number of elements
*nked list_t list
*ist
*ements in the list
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
