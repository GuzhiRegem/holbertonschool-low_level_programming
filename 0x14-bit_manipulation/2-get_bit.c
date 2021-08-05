#include "main.h"
/**
 *get_bit- a
 *@n: a
 *@index: a
 *Return: a
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int comp = 1;

	for (i = 0; i < index; i++)
		comp << 1;
	return ((comp & n) != 0);
}
