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
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
