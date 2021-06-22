#include "holberton.h"

/**
 *print_sign - print a message with printf
 *@n: The character to print
 *
 *Return: end program
 */
int print_sign(int n)
{
	char _c;

	_c = '0';
	if (n > 0)
		_c = '+';
	if (n < 0)
		_c = '-';
	_putchar(_c);
	return ((n > 0) - (n < 0));
}
