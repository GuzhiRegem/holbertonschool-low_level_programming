#include "holberton.h"
#include <math.h>

/**
 *print_number - print a message with printf
 *@n : number
 *
 *Return: end program
 */
void print_number(int n)
{
	int i, b, c, d;
	double a, _n;

	i = 0;
	a = 10;
	d = n / 10;
	while (d)
	{
		i++;
		a *= 10;
		d /= 10;
	}
	_n = n;
	if (n < 0)
	{
		_n *= -1;
		_putchar('-');
	}
	while (i)
	{
		a /= 10;
		c = (_n / a);
		b = (c % 10);
		_putchar(b + '0');
		i--;
	}
	c = _n;
	b = c % 10;
	if (b < 0)
		b *= -1;
       	_putchar(b + '0');
}
