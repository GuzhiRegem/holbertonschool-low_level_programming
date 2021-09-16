#include "lists.h"

/**
  * dlistint_len - a
  * @h: a
  * Return: a
  */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + dlistint_len(h->next));
}
