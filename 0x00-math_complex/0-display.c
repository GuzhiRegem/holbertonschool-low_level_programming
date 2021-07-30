#include "holberton.h"
#include <stdio.h>

/**
 *display_complex_number - a
 *@c: a
 *Return: a
 */
void display_complex_number(complex c)
{
	char sign = '+';
	if (c.re)
		printf("%g",c.re);
	if (c.im < 0)
		sign = '-';
	if (c.im)
	{
		if (c.re)
			printf(" %c ", sign);
		printf("%g",c.im);
	}
	printf("\n");
}
