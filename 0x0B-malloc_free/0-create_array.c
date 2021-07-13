#include <stdio.h>
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

	if (size > 0)
		p = malloc(size);
	return (p);
}
