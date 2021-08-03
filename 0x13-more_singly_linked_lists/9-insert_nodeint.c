#include "lists.h"
#include <stdlib.h>

listint_t *create_node(int n);


/**
 *insert_nodeint_at_index - a
 *@head: a
 *@idx: a
 *@n: a
 *Return: a
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *back = NULL;

	if (!head)
		return (NULL);
	ptr = create_node(n);
	if (!ptr)
		return (NULL);
	ptr->next = get_nodeint_at_index(*head, idx);
	if (!idx)
		*head = ptr;
	else
	{
		back = get_nodeint_at_index(*head, idx - 1);
		if (!back)
		{
			free(ptr);
			return (NULL);
		}
		back->next = ptr;
	}
	return (ptr);
}


/**
 *create_node - a
 *@n: a
 *Return: a
 */
listint_t *create_node(int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr)
	{
		ptr->n = n;
		ptr->next = NULL;
	}
	return (ptr);
}


/**
 *get_nodeint_at_index - a
 *@head: a
 *@index: a
 *Return: a
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head && index)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
