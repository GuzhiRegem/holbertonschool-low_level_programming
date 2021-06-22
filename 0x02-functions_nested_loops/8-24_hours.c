#include "holberton.h"

/**
 *jack_bauer - print a message with printf
 *
 *Return: end program
 */
void jack_bauer(void)
{
	int i, _i;

	i = 0;
	while (i < 24)
	{
		for (_i = 0; _i < 60; _i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((_i / 10) + '0');
			_putchar((_i % 10) + '0');
			_putchar('\n');
		}
		i++;
	}
}
