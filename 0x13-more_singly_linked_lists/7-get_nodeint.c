#include "lists.h"
#include <stdlib.h>
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
