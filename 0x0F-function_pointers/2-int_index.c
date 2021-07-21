/**
 *array_iterator - a
 *@array: a
 *@size: a
 *@cmp: a
 *
 *Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	for (i = 0; i < size; i++)
	{
		num = cmp(array[i]);
		if (num)
			return(i);
	}
	return (-1);
}
