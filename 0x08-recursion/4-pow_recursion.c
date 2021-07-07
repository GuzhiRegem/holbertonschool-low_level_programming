#include "holberton.h"

/**
 *_pow_recursion - print a message with printf
 *@x : number
 *@y : number
 *
 *Return: end program
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
