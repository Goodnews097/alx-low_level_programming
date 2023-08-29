#include "lists.h"

/**
 * get- returns the node at a certain index in a linked list
 * @hede in the linked list
 * @inof the node to return
 *
 * Ret node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
