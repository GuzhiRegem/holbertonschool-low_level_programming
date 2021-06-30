#include "holberton.h"

/**
 *_strcat - print a message with printf
 *@dest : number
 *@src : number
 *
 *Return: end program
 */
char *_strcat(char *dest, char *src)
{
	int i, a;
	for (i = 0; dest[i] != 0; i++)
		continue;
	for (a = 0; src[a] != 0; a++)
		dest[i + a] = src[a];
	dest[i + a] = src[a];
        return (dest);
}
