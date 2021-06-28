#include "holberton.h"

/**
 *puts_half - print a message with printf
 *@str : number
 *
 *Return: end program
 */
void puts_half(char *str)
{
	int i, leng;

	i = 0;
	while (*(str + i) != 0)
		i++;
	leng = i;
	i = 0;
	while (*(str + i) != 0)
	{
		if (i > (leng / 2))
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
