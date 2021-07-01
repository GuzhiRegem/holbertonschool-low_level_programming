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
	int i, _n, a;

	i = 0;
	a = 1;
	_n = n;
	while (_n)
	{
		i++;
		a *= 10;
		_n /= 10;
	}
	_n = n;
	if (n < 0)
	{
		_n *= -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	while (i)
	{
		a /= 10;
		_putchar(((_n / a) % 10) + '0');
		i--;
	}
}
