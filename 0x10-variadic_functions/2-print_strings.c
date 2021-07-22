#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - a
 *@separator: a
 *@n: a
 *
 *Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *a;

	va_start(args, n);
	a = va_arg(args, char *);
	for (i = 0; i < n; i++, a = va_arg(args, char *))
	{
		if (a)
			printf("%s", a);
		else
			printf("(nil)");
		if (((i + 1) < n) && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
