#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_str_len - a
 *@str: a
 *Return: a
 */
unsigned int _str_len(char *str)
{
	if (!str[0])
		return (0);
	return (_str_len(str + 1) + 1);
}
/**
 *add_node_end - a
 *@head: j
 *@str: a
 *Return: a
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	char *cpy = NULL;

	while ((**head).next)
		*head = (**head).next;
	if (str)
		cpy = strdup(str);
	ptr = malloc(sizeof(list_t));
	if (ptr && head)
	{
		ptr->str = cpy;
		if (cpy)
			ptr->len = _str_len(cpy);
		ptr->next = *head;
		(**head).next = ptr;
	}
	return (ptr);
}
