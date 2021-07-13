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
	unsigned int size1, size2 = 0;

	if (s1 != NULL)
	{
		for (; s1[size1]; size1++)
			continue;
	}
	if (s2 != NULL)
	{
		for (; s2[size2]; size2++)
			continue;
	}
	size2++;
	p = malloc(size1 + size2);
	if (p != NULL)
	{
		size1 = 0;
		size2 = 0;
		if (s1 != NULL)
		{
			for (; s1[size1]; size1++)
				p[size1] = s1[size1];
		}
		if (s2 != NULL)
		{
			for (; s2[size2]; size2++)
				p[size1 + size2] = s2[size2];
		}
		p[size1 + size2] = 0;
	}
	return (p);
}
