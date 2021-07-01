#include "holberton.h"

/**
 *rot13 - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *rot13(char *s)
{
	int i, a;

	for (i = 0; s[i] != 0; i++)
	{
		a = (((s[i] >= 'a') && (s[i] <= 'm')) ||
		     ((s[i] >= 'A') && (s[i] <= 'M'))) -
			(((s[i] >= 'n') && (s[i] <= 'z'))
			 || ((s[i] >= 'N') && (s[i] <= 'Z')));
		s[i] += 13 * a;
	}
	return (s);
}
