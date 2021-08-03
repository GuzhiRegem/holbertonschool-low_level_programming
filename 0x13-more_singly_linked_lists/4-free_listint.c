#include "lists.h"
11;rgb:3030/0a0a/2424#include <stdlib.h>
/**
 *free_listint - a
 *@head: a
 *Return: a
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head)
	{
		ptr = head->next;
		free(head);
		if (ptr)
			free_listint(ptr);
	}
}
