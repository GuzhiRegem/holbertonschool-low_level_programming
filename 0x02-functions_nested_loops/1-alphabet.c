#include "holberton.h"

/**
 *print_alphabet - print a message with printf
 *
 *Return: end program
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
