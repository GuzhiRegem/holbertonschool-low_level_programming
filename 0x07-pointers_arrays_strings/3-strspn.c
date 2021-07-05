#include "holberton.h"
#include <stddef.h>

/**
 *_strspn - print a message with printf
 *@s : number
 *@accept : number
 *
 *Return: end program
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int out = 0;

	if (s != NULL)
	{
		if (accept != NULL)
		{
			for (a = 0; s[a]; a++)
			{
				for (b = 0; accept[b]; b++)
				{
					if (*(s + a) == *(accept + b))
						out++;
				}
			}
		}
		else
			out ++;
	}
	return (out);
}
