#include <stdarg.h>

/**
 *sum_them_all - a
 *@n: a
 *
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int a, out = 0;

	va_start(args, n);
	a = n;
	a = va_arg(args, int);
	for (i = 0; i < n; i++, a = va_arg(args, int))
	{
		out += a;
	}
	va_end(args);
	return (out);
}
