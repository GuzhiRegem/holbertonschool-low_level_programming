#include "holberton.h"

/**
 *print_numbers - print a message with printf
 *
 *Return: end program
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
