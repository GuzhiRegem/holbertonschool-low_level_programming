#include "holberton.h"

/**
 *print_triangle - print a message with printf
 *@size - number
 *
 *Return: end program
 */
void print_triangle(int size)
{
	int i, m;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (m = 0; m < (size - i); m++)
				_putchar(' ');
			for (m = 0; m < i; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
