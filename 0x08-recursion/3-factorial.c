#include "holberton.h"

/**
  *factorial - print a message with printf
 *@n : number
 *
 *Return: end program
 */
int factorial(int n);
{
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
