#include "holberton.h"

/**
 *cap_string - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *cap_string(char *s)
{
	int i, d, o, a, b;
	int lis[] = {44, 59, 46, 33, 63, 32, 34, 40, 41, '{', '}', '\d', '\n',};

	d = 'A' - 'a';
	o = 0;
	for (i = 0; s[i] != 0; i++)
	{
		o = 0;
		for (a = 0; a < 12; a++)
			o += (s[i] == lis[a]);
		b += o;
		if (((s[i] <= 'z') && (s[i] >= 'a')) && b)
		{
			s[i] += d;
			b = 0;
		}
		if (b && !(o))
			b = 0;
	}
	return (s);
}
