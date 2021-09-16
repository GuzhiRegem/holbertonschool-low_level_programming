#include "lists.h"

/**
  * delete_dnodeint_at_index - a
  * @head: a
  * @index: a
  * Return: a
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *node, *next = NULL;

	if (!head)
		return (-1);
	node = *head;
	while (index && node)
	{
		node = node->next;
		index--;
	}
	if (!node)
		return (-1);
	next = node->next;
	prev = node->prev;
	if (next)
		next->prev = prev;
	if (!prev)
		*head = next;
	else
		prev->next = next;
	free(node);
	return (1);
}
