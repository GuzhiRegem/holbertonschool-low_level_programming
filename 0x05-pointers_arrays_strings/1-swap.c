#include "holberton.h"

/**
 *swap_int - print a message with printf
 *@a : number
 *@b : number
 *
 *Return: end program
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
