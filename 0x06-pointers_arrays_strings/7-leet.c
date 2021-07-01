#include "holberton.h"

/**
 *leet - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *leet(char *s)
{
	int i, a;
	int src[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int des[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != 0; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (s[i] == src[a])
				s[i] = des[a];
		}
	}
	return (s);
}
