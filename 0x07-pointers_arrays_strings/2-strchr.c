#include "holberton.h"
#include <stddef.h>

/**
 *_strchr - print a message with printf
 *@s : number
 *@c : number
 *
 *Return: end program
 */
char *_strchr(char *s, char c)
{
	char *p;
	int i, find;

	find = 0;
	p = s;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			find = 1;
			break;
		}
	}
	if (find)
		p = s + i;
	else
		p = NULL;
	return (p);
}
