#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - a
 *@separator: a
 *@n: a
 *
 *Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int a;

	va_start(args, n);
	a = n;
	a = va_arg(args, int);
	for (i = 0; i < n; i++, a = va_arg(args, int))
	{
		printf("%d",a);
		if ((i + 1) < n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
