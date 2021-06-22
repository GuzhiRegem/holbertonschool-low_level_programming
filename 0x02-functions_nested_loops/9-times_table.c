#include "holberton.h"

/**
 *times_table - print a message with printf
 *
 *Return: end program
 */
void times_table(void)
{
	int i, _i, r;

	i = 0;
	while (i < 10)
	{
		_i = 0;
		while (_i < 10)
		{
			r = i * _i;
			if (r < 10)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (_i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		i++;
	}
}
