#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - print a message with printf
 *@a : number
 *@size : a
 *
 *Return: end program
 */
void print_diagsums(int *a, int size)
{
        int i, dia1, dia2;

	dia1 = 0;
	dia2 = 0;
	for (i = 0; i < size; i++)
	{
		dia1 += a[i + (size * i)];
		dia2 += a[(size - i - 1) + (size * i)];
	}
	printf("%d, %d\n", dia1, dia2);
}
