#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint_end - a
 *@head: j
 *@n: a
 *Return: a
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *end;

	ptr = malloc(sizeof(listint_t));
	if (ptr)
	{
		ptr->n = n;
		ptr->next = NULL;
		if (*head)
		{
			end = *head;
			while (end->next)
				end = end->next;
			end->next = ptr;
		}
		else
			*head = ptr;
	}
	return (ptr);
}
