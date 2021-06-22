#include "holberton.h"

/**
 *print_last_digit - print a message with printf
 *@c: The character to print
 *
 *Return: end program
 */
int print_last_digit(int c)
{
	int a;

	a = c % 10;
	a -= a * 2 * (a < 0);
	_putchar(a + '0');
	return (a);
}
