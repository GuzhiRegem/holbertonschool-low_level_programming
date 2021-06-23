#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	long int a, b, c;
	int i;

	a = 1;
	b = 2;
	c = 0;
	printf("1, 2, ");
	for (i = 0; i < 47; i++)
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%ld\n", c);
	return (0);
}
