#include "holberton.h"

/**
 *_puts2 - print a message with printf
 *@str : number
 *
 *Return: end program
 */
void _puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
