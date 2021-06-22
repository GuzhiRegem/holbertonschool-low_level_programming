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

	a = c - (c * 2 * (c < 0));
	_putchar((a % 10) + '0');
	return ((a % 10));
}
