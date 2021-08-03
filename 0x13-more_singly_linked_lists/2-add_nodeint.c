#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - a
 *@head: j
 *@n: a
 *Return: a
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr && head)
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
