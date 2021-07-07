#include "holberton.h"

/**
 *is_prime_number - print a message with printf
 *@n : number
 *
 *Return: end program
 */
int is_prime_number(int n)
{
	int i, is_prime = 0;

	for (i = 1; i < (n / 2); i++)
	{
		if ((n % i) == 0)
			is_prime = 1;
	}
	return (is_prime);
}
