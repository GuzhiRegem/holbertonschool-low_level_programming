#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *cmpr - a
 *@head: a
 *@ptr: a
 *Return: a
 */
int cmpr(const listint_t *head, const listint_t *ptr, const listint_t *limit)
{
	if (!head)
		return (0);
	if (head == ptr)
		return (1);
	if (head == limit)
		return (0);
	return (cmpr(head->next, ptr, limit));
}
/**
 *print_l - a
 *@h: a
 *@head: a
 *Return: a
 */
size_t print_l(const listint_t *h, const listint_t *head)
{
	size_t out = 0;

	if (!h)
	{
		return (out);
	}
	printf("[%p] %d\n", (void *)h, h->n);
	out = 1;
	if (!h->next)
		return (out);
	if (cmpr(head, h->next, h))
	{
		return (out);
	}
	return (out + print_l(h->next, head));
}
size_t print_listint_safe(const listint_t *head)
{
	return (print_l(head, head));
}
