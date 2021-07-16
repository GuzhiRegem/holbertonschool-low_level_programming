#include <stdlib.h>
#include <stddef.h>

/**
 *array_range - a
 *@min : aa
 *@max : aa
 *
 *Return: none
 */
int *array_range(int min, int max)
{
	int size, i;
	int *p = NULL;

	size = max - min;
	if (min <= max)
		p = malloc((size + 1) * sizeof(int));
	if (p)
	{
		for (i = 0; i <= size; i++)
			p[i] = min + i;
	}
	return (p);
}
