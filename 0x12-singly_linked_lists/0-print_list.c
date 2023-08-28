#include "lists.h"
/**
* print_list - Print all the elements of a list_t list print_list - Print all the elements of aprint_list - Print all the elements of aprint_list - Print all the elements of a
* @h: data type pointer of struct print_list - Print all the elements of aprint_list - Print all the elements of aprint_list - Print all the elements of a
* Return: elements of the str iprint_list - Print all the elements of aprint_list - Print all the elements of aprint_list - Print all the elements of a
*/
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	i = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
