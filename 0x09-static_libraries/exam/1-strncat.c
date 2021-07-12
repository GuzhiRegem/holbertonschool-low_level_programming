#include "holberton.h"

/**
 *_strncat - print a message with printf
 *@dest : number
 *@src : number
 *@n : a
 *
 *Return: end program
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != 0; i++)
		continue;
	for (a = 0; (src[a] != 0) && (a < n); a++)
		dest[i + a] = src[a];
	if (a < n)
		dest[i + a] = src[a];
	return (dest);
}
