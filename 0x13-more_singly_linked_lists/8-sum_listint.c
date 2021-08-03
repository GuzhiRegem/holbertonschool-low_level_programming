#include "lists.h"
#include <stdlib.h>
/**
 *sum_listint - a
 *@head: a
 *Return: a
 */
int sum_listint(listint_t *head)
{
        if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}
