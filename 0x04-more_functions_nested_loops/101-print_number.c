#include "holberton.h"
#include <math.h>

/*
 *print_number - coso
 *@n : num
 *
 *Return: coso
 */
void print_number(int n)
{
	int i;

	i = log10(n);
	for (int a = i; a > 0; a--)
		_putchar( (n / (10 ** i) ) % 10 );
	_putchar('\n');
}
