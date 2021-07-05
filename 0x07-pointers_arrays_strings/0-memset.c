#include "holberton.h"

/**
 *_memset - print a message with printf
 *@s : number
 *@b : number
 *@n : number
 *
 *Return: end program
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
