#include "lists.h"

#ifndef CREAT
#define CREAT
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
#endif

/**
  * add_dnodeint - a
  * @head: a
  * @n: a
  * Return: a
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = create_node(n);
	if (!new)
		return (NULL);
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
