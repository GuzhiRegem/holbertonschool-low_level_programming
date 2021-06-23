#include "holberton.h"

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int i, n;

	n = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
			n += i;
	}
	_putchar(((n / 100000) % 10) + '0');
	_putchar(((n / 10000) % 10) + '0');
	_putchar(((n / 1000) % 10) + '0');
	_putchar(((n / 100) % 10) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar(((n / 1) % 10) + '0');
	_putchar('\n');
	return (0);
}
