#include "holberton.h"
#include <stddef.h>

/**
 *_strpbrk - print a message with printf
 *@s : number
 *@accept : number
 *
 *Return: end program
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b, out;
	char *p;

	out = 1;
	p = NULL;
	for (a = 0; ((s[a] != 0) && (out)); a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if ((*(s + a) == *(accept + b)) && (out))
			{
				out = 0;
				p = (s + a);
			}
		}
	}
	return (p);
}
