#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hola";
	char *f;

	f = _strchr(s, 'e');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
		printf("si\n");
	return (0);
}
