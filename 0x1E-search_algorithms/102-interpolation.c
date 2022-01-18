#include "search_algos.h"

/**
 * interpolation_search - interpolation_search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1, pos, tmp;

	tmp = ((double)(end - start) / (array[end] - array[start]));
	pos = start + (tmp * (value - array[start]));
	if (pos > (int)size)
	{
		printf("Value checked array[%d] is out of range\n", pos);
		return(-1);
	}
	while (start <= end && value >= array[start] && value <= array[end])
	{
		tmp = ((double)(end - start) / (array[end] - array[start]));
		pos = start + (tmp * (value - array[start]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			start = pos + 1;
		else
			end = pos - 1;
	}
	return (-1);
}
