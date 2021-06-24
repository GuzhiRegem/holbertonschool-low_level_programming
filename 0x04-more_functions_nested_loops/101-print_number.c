#include "holberton.h"
/*
 *print_number - coso
 *@n : num
 *
 *Return: coso
 */
void print_number(int n)
{
	int a, b;

        if (n < 0)
	{
		a = n * -1;
		_putchar('-');
	}
	else
		a = n;
	b = ((a / 10000000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 1000000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 100000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 10000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 1000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 100) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 10) % 10);
	if (b)
		_putchar(b + '0');
	_putchar((a % 10) + '0');
}
