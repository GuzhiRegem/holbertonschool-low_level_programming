#include "holberton.h"

/**
 *reverse_array - print a message with printf
 *@a : number
 *@b : number
 *
 *Return: end program
 */
void reverse_array(int *a, int n)
{
	int out[999];
	int i;

	for (i = 0; i < n; i++)
		out[i] = a[i];
	while (i)
	{
		i--;
		a[n - i] = out[i];
	}
}
