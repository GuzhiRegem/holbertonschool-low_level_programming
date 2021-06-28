#include "holberton.h"

/**
 *print_rev - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	while (i)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
