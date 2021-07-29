#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - a
 *@h: j
 *Return: a
 */
size_t print_list(const list_t *h)
{
	size_t out = 0;
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	else
		return (out);
}
