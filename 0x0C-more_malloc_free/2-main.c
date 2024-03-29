#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *a;
	unsigned int num1, num2;

	num1 = 10;
	num2 = 0;
	a = calloc(num1, num2);
	strcpy(a, "Holberton");
	strcpy(a + 9, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	num1 = 98;
	num2 = sizeof(char);
	a = _calloc(num1, num2);
	strcpy(a, "Holberton");
	strcpy(a + 9, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
