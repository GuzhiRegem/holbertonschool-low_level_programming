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
	char *f = NULL;
	char *t;

	t = _strstr(s, f);
	if (t != NULL)
		printf("%s\n", t);
	else
		printf("NO12\n");
	return (0);
}
