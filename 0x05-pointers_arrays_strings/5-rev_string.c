#include "holberton.h"

/**
 *rev_string - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void rev_string(char *s)
{
	int i, a;
	char out[999];

	i = 0;
	while (*(s + i) != 0)
		i++;
	a = 0;
	while (i)
	{
		i--;
		out[a] = *(s + i);
		a++;
	}
	i = 0;
	while (out[i] != 0)
	{
		*(s + i) = out[i];
		i++;
	}
}
