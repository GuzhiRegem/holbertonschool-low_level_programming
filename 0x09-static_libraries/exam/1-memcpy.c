#include "holberton.h"

/**
 *_memcpy - print a message with printf
 *@dest : number
 *@src : number
 *@n : number
 *
 *Return: end program
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
