#include "holberton.h"

/**
 *puts2 - print a message with printf
 *@str : number
 *
 *Return: end program
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		if ((*(str + i) % 2) == 2)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
