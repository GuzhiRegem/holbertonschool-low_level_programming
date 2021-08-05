#include "main.h"
/**
 *set_bit- a
 *@n: a
 *@index: a
 *Return: a
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int i;

	if (index >= 64)
		return (-1);
	num = 1;
	for (i = 0; i < index; i++)
		num *= 2;
	*n = *n | num;
	return (1);
}
