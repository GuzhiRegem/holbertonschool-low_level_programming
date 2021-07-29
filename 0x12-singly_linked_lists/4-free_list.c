#include "lists.h"
#include <stdlib.h>
/**
 *free_list - a
 *@head: a
 *Return: a
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		if (ptr)
			free_list(ptr);
	}
}
