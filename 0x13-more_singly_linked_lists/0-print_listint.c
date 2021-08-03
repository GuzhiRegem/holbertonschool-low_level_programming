#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_listint - a
 *@h: a
 *Return: a
 */
size_t print_listint(const listint_t *h)
{
	size_t out = 0;

	if (!h)
	{
		return (out);
	}
	printf("%d\n", h->n);
	out = 1;
	if (!h->next)
		return (out);
	return (out + print_listint(h->next));
}
