#include "lists.h"

/**
  *sum_dlistint - a
  *@head: a
  *Return: a
  */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
