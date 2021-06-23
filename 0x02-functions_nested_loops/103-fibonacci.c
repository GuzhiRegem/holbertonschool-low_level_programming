#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	long int a, b, c, d;
	int i;

	a = 1;
	b = 2;
	c = 0;
	d = 2;
	for (i = 0; i < 29; i++)
	{
		c = a + b;
		if ((c % 2) == 0)
			d += c;
		a = b;
		b = c;
	}
	c = a + b;
       	if ((c % 2) == 0)
	       	d += c;
	printf("%ld\n", d);
	return (0);
}
