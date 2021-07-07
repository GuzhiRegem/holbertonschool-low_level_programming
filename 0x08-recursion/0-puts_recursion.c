#include "holberton.h"

/**
 *_puts_recursion - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == 0)
	{
		return;
		_putchar('\n');
	}
	_puts_recursion(s + 1);
}
