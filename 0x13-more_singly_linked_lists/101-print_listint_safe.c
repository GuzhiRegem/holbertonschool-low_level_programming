#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_l - a
 *@h: a
 *@head: a
 *Return: a
 */
size_t print_l(const listint_t *h, const listint_t *head)
{
	size_t out = 0;

	if (!h || h == head)
	{
		return (out);
	}
	printf("%d\n", h->n);
	out = 1;
	if (!h->next)
		return (out);
	return (out + print_listint(h->next, head));
}
size_t print_listint_safe(const listint_t *head)
{
	return (print_l(head, head));
}
