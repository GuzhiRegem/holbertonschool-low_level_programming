#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - blabla
 * @format: blabla
 * Return: blabla
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	int n = 0, i = 0;
	char *sep = ", ";
	char *c;

	va_start(vl, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(vl, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(vl, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(vl, double), sep);
			break;
		case 's':
			c = va_arg(vl, char *);
			if (c == NULL)
				c = "(nil)";
			printf("%s%s", c, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(vl);
}
