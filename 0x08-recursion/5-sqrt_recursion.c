#include "holberton.h"

/**
 *comp - print a message with printf
 *@n : number
 *@y : number
 *
 *Return: end program
 */
int comp(int n, int y)
{
	if (y * y == n)
		return(y);
	else if (y * y > n)
		return(-1);
	return (comp(n, y + 1));
}
/**
 *_sqrt_recursion - print a message with printf
 *@n : number
 *
 *Return: end program
 */
int _sqrt_recursion(int n)
{
	return (comp(n, 1));
}
