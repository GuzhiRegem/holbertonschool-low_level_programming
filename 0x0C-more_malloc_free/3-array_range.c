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
        int i;
	int *p = NULL;

	if (min <= max)
		p = malloc(max - min);
	if (p)
	{
		for (i = min; i <= max; i++)
			p[max - min] = i;
	}
	return (final);
}
