#include <stdlib.h>
#include "holberton.h"

/**
 *str_concat - a
 *@s1 : a
 *@s2 : a
 *
 *Return: la
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	unsigned int size1, size2, final;

	final = 1;
	if (s1)
	{
		for (size1 = 0; s1[size1]; size1++)
			final++;
	}
	if (s2)
	{
		for (size2 = 0; s2[size2]; size2++)
			final++;
	}
	p = malloc(final);
	if (p)
	{
		size1 = 0;
		size2 = 0;
		if (s1)
		{
			for (; s1[size1]; size1++)
				p[size1] = s1[size1];
		}
		if (s2)
		{
			for (; s2[size2]; size2++)
				p[size1 + size2] = s2[size2];
		}
		p[size1 + size2] = '\0';
	}
	return (p);
}
