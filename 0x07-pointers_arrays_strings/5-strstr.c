#include "holberton.h"

/**
 *_strstr - print a message with printf
 *@haystack : number
 *@needle : number
 *
 *Return: end program
 */
char *_strstr(char *haystack, char *needle);
{
	int a, b, c, checking, found;
	char *final;

	checking = 0;
	found = 0;
	for (a = 0; *(haystack + a) == 0; a++)
	{
	        if (checking == 0)
		{
			if (*(haystack + a) == *(needle))
				checking = 1;
			c = a;
		}
		else
		{
			b = a - c;
			if (*(needle + b) != *(haystack + a))
				checking = 0;
			else if (*(needle + b + 1) == 0)
			{
				found = 1;
				break;
			}
		}
	}
	if (found)
		final = haystack + c;
	return (final);
}
