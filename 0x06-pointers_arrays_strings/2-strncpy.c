#include "holberton.h"

/**
 *_strncpy - print a message with printf
 *@dest : number
 *@src : number
 *@n : number
 *
 *Return: end program
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, a;

	a = 1;
	for (i = 0; i < n; i++)
	{
		if (a)
			dest[i] = src[i];
		else
			dest[i] = 0;
		if (src[i] == 0)
			a = 0;
	}
	return (dest);
}
