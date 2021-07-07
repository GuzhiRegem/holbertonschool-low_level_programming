#include "holberton.h"

/**
 *_print_rev_recursion - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void _print_rev_recursion(char *s)
{
	if (s == "")
		return;
        _print_rev_recursion(s + 1);
	_putchar(*s);
}
