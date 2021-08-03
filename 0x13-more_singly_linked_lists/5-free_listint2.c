#include "lists.h"
#include <stdlib.h>
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
/**
 *free_listint2 - a
 *@head: a
 *Return: a
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
