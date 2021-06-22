#include "holberton.h"

/**
 *print_last_digit - print a message with printf
 *@c: The character to print
 *
 *Return: end program
 */
int print_last_digit(int c)
{
	_putchar((c % 10) + '0');
	return ((c % 10));
}
