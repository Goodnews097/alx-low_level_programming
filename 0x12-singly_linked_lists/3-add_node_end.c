#include "lists.h"
/**
* add_node_end -  Adds a new node at the end of a list_t list.dd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a l
* @head: The pointer address to header node.dd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a l
* @str: Pointer to the string of the node.dd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a l
* Description: This function adds a new node at the end of a list_t list.dd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a l
* Return: The address of the new element, or NULL if it failed.dd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a ldd_node_end -  Adds a new node at the end of a l
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}