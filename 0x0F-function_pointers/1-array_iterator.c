#include <stddef.h>

/**
 *array_iterator - a
 *@array: a
 *@size: a
 *@action: a
 *
 *Return: a
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
