#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *reverse_l - a
 *@head: a
 *@back: a
 *Return: a
 */
listint_t *reverse_l(listint_t *head, listint_t *back)
{
	listint_t *next;

	next = head->next;
	head->next = back;
	if (!next)
	{
		return (head);
	}
	return (reverse_l(next, head));
}


/**
 *reverse_listint - a
 *@head: a
 *Return: a
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head && *head)
	{
		*head = reverse_l(*head, NULL);
		return (*head);
	}
	return (NULL);
}
