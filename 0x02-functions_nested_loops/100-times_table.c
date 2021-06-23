#include "holberton.h"

void rint_times_table(int n)
{
	int a, b, c;
	if ((n >= 0) && (n <= 15))
	{
		for(a = 0; a < n; a++)
		{
			for(b = 0; b < n; b++)
			{
				c = a * b;
				if (b > 0)
				{
					_putchar(' ');
					if (c > 99)
						_putchar((c / 100) + '0');
					else
						_putchar(' ');
					if (c > 9)
						_putchar(((c / 10) % 10) + '0');
					else
						_putchar(' ');
					_putchar((c % 10) + '0');
				}
				_putchar((c % 10) + '0');
				if (b < (n - 1))
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
