#include "holberton.h"

/**
 *_puts - print a message with printf
 *@str : number
 *
 *Return: end program
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
}
