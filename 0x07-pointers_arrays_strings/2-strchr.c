#include "holberton.h"

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
	int i;

	for (i = 0; *(s + i) == 0; i++)
	{
		if (*(s + i) == c)
		{
			p = (s + i);
			break;
		}
	}
	return (p);
}
