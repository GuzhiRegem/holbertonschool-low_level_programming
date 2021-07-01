#include "holberton.h"

/**
 *reverse_array - print a message with printf
 *@a : number
 *@n : number
 *
 *Return: end program
 */
void reverse_array(int *a, int n)
{
	int i;
	int out[999];

	for (i = 0; i < n; i++)
		out[n - i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = out[i + 1];
}
