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

	a = 7;
	while (a--)
	{
		b = ((n / (10 ** (a+1))) % 10);
		if (b != 0)
			_putchar(b + '0');
	}
	_putchar((n % 10) + '0');
}
