#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - a
 *@size : a
 *@c : c
 *
 *Return: la
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size);
		if (p != NULL)
		{
			for (i = 0; i < size; i++)
				p[i] = c;
		}
	}
	return (p);
}
