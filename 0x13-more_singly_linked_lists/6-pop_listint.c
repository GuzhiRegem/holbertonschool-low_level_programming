#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - a
 *@head: a
 *Return: a
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (!head)
		return (0);
	ptr = *head;
	if (!ptr)
		return (0);
	i = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (i);
}
