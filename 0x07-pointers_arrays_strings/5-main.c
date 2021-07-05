#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello wo";
	char *f = "ll";
	char *t;

	printf("s\n");
	t = _strstr(s, f);
	printf("s\n");
	if (t != NULL)
		printf("%s\n", t);
	else
		printf("NO12\n");
	return (0);
}
