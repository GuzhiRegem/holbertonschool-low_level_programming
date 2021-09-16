#include "lists.h"

/**
  * add_dnodeint - a
  * @head: a
  * @n: a
  * Return: a
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*head)
		(*head)->prev = new;
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
