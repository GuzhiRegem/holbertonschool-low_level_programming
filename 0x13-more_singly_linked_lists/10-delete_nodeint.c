#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - a
 *@head: a
 *@index: a
 *Return: a
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL;
	listint_t *next = NULL;
	listint_t *back = NULL;

        if (!head)
		return (-1);
	ptr = get_nodeint_at_index(*head, index);
	if (!ptr)
		return (-1);
	next = ptr->next;
	if (!index)
	{
		*head = next;
		free(ptr);
		return (1);
	}
	back = get_nodeint_at_index(*head, index - 1);
	back->next = next;
	free(ptr);
	return (1);
}


/**
 *get_nodeint_at_index - a
 *@head: a
 *@index: a
 *Return: a
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head && index)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
