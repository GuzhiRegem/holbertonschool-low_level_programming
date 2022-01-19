#include "search_algos.h"
#define min(a, b) (a <= b ? a : b)
/**
 * jump_search - jump_search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	int a = 0, jump = sqrt(size), b = 0;

	if (!array)
		return (-1);
	while (b <= (int)size)
	{
		a = b;
		b += jump;
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		if (array[b] >= value)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", a, b);
	for (; a < (int)size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
