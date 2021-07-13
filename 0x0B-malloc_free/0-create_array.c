#include <stdio.h>
#include <stddef.h>
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
	char *p;
	int i;

	if (size > 0)
	{
		p = malloc(size);
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
