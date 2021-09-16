#include "lists.h"

/**
  * add_dnodeint_end - a
  * @head: a
  * @n: a
  * Return: a
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	end = *head;
	if (*head)
	{
		while (end->next)
			end = end->next;
		end->next = new;
	}
	else
		*head = new;
	new->prev = end;
	return (new);
}
