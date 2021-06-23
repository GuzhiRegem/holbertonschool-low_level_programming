#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	long double a, b, c;
	int i;

	a = 1;
	b = 2;
	c = 0;
	printf("1, 2, ");
	for (i = 0; i < 95; i++)
	{
		c = a + b;
		printf("%.0Lf, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%.0Lf\n", c);
	return (0);
}
