#include "holberton.h"

/**
 *func - print a message with printf
 *@n : number
 *@i : num
 *
 *Return: end program
 */
int func(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if ((n % i) == 0)
		return (0);
	else
		return (func(n, i - 1));
}
/**
 *is_prime_number - print a message with printf
 *@n : number
 *
 *Return: end program
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (func(n, n - 1));
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (1);
}
