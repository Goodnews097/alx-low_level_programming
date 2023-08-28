#ifndef LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LISTS_H
/**
* struct list_s - singly linked list struct list_s - singly linked list struct list_s - singly linked list
* @str: string - (malloc'ed string) struct list_s - singly linked list
* @len: length of the string struct list_s - singly linked list
* @next: points to the next node struct list_s - singly linked list struct list_s - singly linked list
*
* Description: singly linked list node structure
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void before_main(void)__attribute__((constructor));

int _strlen(char *s);
int _putchar(char c);


#endif
