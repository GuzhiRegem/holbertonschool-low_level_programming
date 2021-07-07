#include "holberton.h"

/**
 *_puts_recursion - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		return;
	_putchar(*s);
	_puts_recursion(++s);
	_putchar("\n");
}
