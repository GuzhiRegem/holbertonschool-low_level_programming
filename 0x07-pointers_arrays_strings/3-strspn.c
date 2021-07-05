#include "holberton.h"

/**
 *_strspn - print a message with printf
 *@s : number
 *@accept : number
 *
 *Return: end program
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, out;

	out = 0;
	for (a = 0; s[a]; a++)
	{
	        for (b = 0; accept[b]; b++)
		{
			if (*(s + a) == *(accept + b))
				out++;
		}
	}
	return (out);
}
