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
	out.n = n;
	out.next = NULL;
	out.prev = NULL;
	return (out);
}

/**
  * add_dnodeint - a
  * @head: a
  * @n: a
  * Return: a
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
}
