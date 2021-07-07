#include "holberton.h"

/**
 *_sqrt_recursion - print a message with printf
 *@n : number
 *
 *Return: end program
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_recursion(n - 1) / 2);
}
