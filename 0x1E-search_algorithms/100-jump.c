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
	int a = 0, b = sqrt(size);

	if (!array)
		return (-1);
	while (b < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		if (b >= value)
			break;
		if (b > (int)size)
			return (-1);
		a = b;
		b += sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", a, b);
	for (; a <= min(b, (int)size - 1); a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
