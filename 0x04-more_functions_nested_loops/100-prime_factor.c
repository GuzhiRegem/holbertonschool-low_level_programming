#include <stdio.h>

/**
 *IsPrime - print a message with printf
 *@n : nume
 *
 *Return: end program
 */
int IsPrime(long int n)
{
	if (n == 2 || n == 3)
		return (1);

	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);

	for (long int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}

	return (0);
}
/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	long int i, a;
	int b;

	b = 1;
	i = 612852475143;
	a = i / 2;
	a--;
	while (b)
	{
		printf("%ld\n",a);
		if (((i % a) == 0) && (IsPrime(a) == 1))
			b = 0;
		else
			a--;
	}
	printf("%ld\n", a);
	return (0);
}
