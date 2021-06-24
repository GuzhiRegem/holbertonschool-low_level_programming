#include "holberton.h"

/**
 *print_line - print a message with printf
 *@n - number
 *
 *Return: end program
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
