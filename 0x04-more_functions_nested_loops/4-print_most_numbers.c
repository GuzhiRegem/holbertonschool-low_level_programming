#include "holberton.h"

/**
 *print_most_numbers - print a message with printf
 *
 *Return: end program
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c != '2') && (c != '4'))
			_putchar(c);
	}
	_putchar('\n');
}
