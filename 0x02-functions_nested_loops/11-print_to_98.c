#include "holberton.h"

/**
 *putnum - print a message with printf
 *@n: The character to print
 *
 *Return: end program
 */
void putnum(int r)
{
	int n;
	n = r;
	if (r < 0)
	{
		n = r - (r * 2);
		_putchar('-');
	}
	if (n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 *print_to_98 - print a message with printf
 *@n: The character to print
 *
 *Return: end program
 */
void print_to_98(int n)
{
	int i;

	i = n + 0;
        while (i != 98)
	{
		putnum(i);
		_putchar(',');
		_putchar(' ');
		if (i > 98)
			i--;
		else
			i++;
	}
	putnum(98);
	_putchar('\n');
}
