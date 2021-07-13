#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 *alloc_grid - a
 *@width : a
 *@height : b
 *
 *Return: la
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int *_p = NULL;
	int a, b;

        if ((height > 0) && (width > 0))
	{
		p = malloc(sizeof(int *) * height);
		if (p)
		{
			for (a = 0; a < height; a++)
			{
				_p = malloc(sizeof(int) * width);
				if (_p)
				{
					for (b = 0; b < width; b++)
					{
						_p[b] = 0;
					}
				}
				p[a] = _p;
			}
		}
	}
	return (p);
}
