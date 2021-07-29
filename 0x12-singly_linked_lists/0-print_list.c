#include "lists.h"
#include <stdio.h>
/**
 *print_list - a
 *@h: j
 *Return: a
 */
size_t print_list(const list_t *h);
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)");
		print_list(h->next);
	}
}
