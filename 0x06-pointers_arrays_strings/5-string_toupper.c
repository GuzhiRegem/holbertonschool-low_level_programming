#include "holberton.h"

/**
 *string_toupper - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *string_toupper(char *s)
{
	int i, d;

	d = 'A' - 'a';
	for (i = 0; s[i] != 0; i++)
	{
	        if ((s[i] <= 'z') && (s[i] >= 'a'))
			s[i] += d;
	}
	return (s);
}
