#include "main.h"
/**
 *print_binary - a
 *@n: a
 *Return: a
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
		_putchar(n + '0');
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
