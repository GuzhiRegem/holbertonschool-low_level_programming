#include <stdlib.h>
#include "holberton.h"

/**
 *alloc_grid - a
 *@width : a
 *@height : b
 *
 *Return: la
 */
int **alloc_grid(int width, int height)
{
	char *p = NULL;
	int i;

	if ((width > 0) && (height > 0))
	{
		p = malloc(width * height);
		if (p)
		{
			for (i = 0; i < (width * height); i++)
				p[i] = 0;
		}
	}
	return (p);
}
