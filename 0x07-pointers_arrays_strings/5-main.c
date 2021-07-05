#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "aa";
	char *f = "";
	char *t;

	t = _strstr(s, f);
        printf("%p\n", t);
	return (0);
}
