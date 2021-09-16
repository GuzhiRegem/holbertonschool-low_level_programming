#include "lists.h"

/**
  * create_node - a
  * @n: a
  * Return: a
  */
dlistint_t *create_node(int n)
{
	dlistint_t *out;

	out = malloc(sizeof(dlistint_t));
	if (!out)
		return (NULL);
	out->n = n;
	out->next = NULL;
	out->prev = NULL;
	return (out);
}

/**
  * add_dnodeint_end - a
  * @head: a
  * @n: a
  * Return: a
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = create_node(n);
	if (!new)
		return (NULL);
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
