#include "search_algos.h"

/**
 * print_arr - prints an array
 * @array: array
 * @size: size
 */
void print_arr(int *array, size_t size)
{
	size_t i;

	if (!array)
		return;
	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i < (size - 1))
			printf(",");
	}
	printf("\n");
}
/**
 * binary_search - binary_search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int middle, ind, offst, arr_offst = 0;
	size_t mid_ind;

	if (!array || size == 0)
		return (-1);
	print_arr(array, size);
	if (size == 1)
	{
		if (*array == value)
			return (0);
		return (-1);
	}
	mid_ind = (size / 2) - !(size % 2);
	middle = array[mid_ind];
	if (value == middle)
		return (mid_ind);
	offst = -(size - mid_ind);
	if (value > middle)
	{
		offst = -mid_ind - 1;
		arr_offst = mid_ind + 1;
	}
	ind = binary_search(array + arr_offst, size + offst, value);
	return (ind >= 0 ? ind + arr_offst : -1);
	return (0);
}
