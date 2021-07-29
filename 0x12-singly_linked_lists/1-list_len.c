#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - a
 *@h: j
 *Return: a
 */
size_t list_len(const list_t *h)
{
	size_t out = 0;

	if (h)
	{
		return (list_len(h->next) + 1);
	}
	else
		return (out);
}
