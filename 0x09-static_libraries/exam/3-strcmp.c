#include "holberton.h"

/**
 *_strcmp - print a message with printf
 *@s1 : number
 *@s2 : number
 *
 *Return: end program
 */
int _strcmp(char *s1, char *s2)
{
	int out, i;

	out = 0;
	for (i = 0; (s1[i] != 0) && (s2[i] != 0) && (s2[i] == s1[i]); i++)
		continue;
	if (s1[i] != s2[i])
	{
		out = s1[i] - s2[i];
	}
	return (out);
}
