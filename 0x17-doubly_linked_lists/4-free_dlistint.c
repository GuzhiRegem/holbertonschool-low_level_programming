#include "lists.h"

/**
  *free_dlistint - a
  *@head: a
  *Return: a
  */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
