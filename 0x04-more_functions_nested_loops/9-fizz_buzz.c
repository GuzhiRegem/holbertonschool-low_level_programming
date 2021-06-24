#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int i, a, b;
	for(i = 1; i <= 100; i++)
	{
		a = 1;
		b = (i < 100);
		if ((i % 3) == 0)
		{
			printf("Fizz ");
			a = 0;
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
			a = 0;
			if (b)
				printf(" ");
		}
		if (a)
		{
			printf("%d", i);
			if (b)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
