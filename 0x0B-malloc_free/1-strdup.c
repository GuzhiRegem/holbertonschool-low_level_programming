#include <stdlib.h>
#include "holberton.h"

/**
 *_strdup - a
 *@str : a
 *
 *Return: la
 */
char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i, a;

	if (str != NULL)
	{
		for (a = 0; str[a]; a++)
			continue;
		p = malloc(a + 1);
		if (p != NULL)
		{
			for (i = 0; i < a; i++)
				p[i] = str[i];
		}
	}
	return (p);
}
