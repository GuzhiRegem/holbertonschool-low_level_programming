#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "2";
	char *t;

	t = _strpbrk(s, f);
	if (t != NULL)
		printf("%s\n", t);
	else printf("s");
	return (0);
}
