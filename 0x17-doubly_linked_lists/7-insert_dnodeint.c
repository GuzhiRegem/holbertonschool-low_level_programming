#include "lists.h"

/**
  * insert_dnodeint_at_index - a
  * @h: a
  * @idx: a
  * @n: a
  * Return: a
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *prev = NULL, *next = NULL;

	next = *h;
	while (idx && next)
	{
		prev = next;
		next = next->next;
		idx--;
	}
	if (idx && !next)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	if (next)
		next->prev = new;
	if (!prev)
		*h = new;
	else
		prev->next = new;
	return (new);
}
