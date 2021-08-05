#include "main.h"
/**
 *get_bit- a
 *@n: a
 *@index: a
 *Return: a
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!index)
		return (n & 1);
	if (!n)
		return (-1);
	return (get_bit(n / 2, index - 1));
}