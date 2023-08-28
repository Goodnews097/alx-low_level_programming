#include "lists.h"
/**
* free_list - main functionfree_list - main functionfree_list - main function
* @head: The pointer address to header node.free_list - main functionfree_list - main functionfree_list - main function
* Description: This function frees a list_t list.free_list - main functionfree_list - main functionfree_list - main function
* Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);

}
