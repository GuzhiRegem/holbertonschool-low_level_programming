#include "lists.h"

/**
  *get_dnodeint_at_index - a
  *@head: a
  *@index: a
  *Return: a
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!index)
		return (head);
	if (!head)
		return (NULL);
	return (get_dnodeint_at_index(head->next, index - 1));
}
