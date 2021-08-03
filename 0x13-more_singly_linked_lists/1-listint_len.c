#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *listint_len - a
 *@h: a
 *Return: a
 */
size_t listint_len(const listint_t *h)
{
	size_t out = 0;

	if (!h)
	{
		return (out);
	}
	out = 1;
	if (!h->next)
		return (out);
	return (out + listint_len(h->next));
}
